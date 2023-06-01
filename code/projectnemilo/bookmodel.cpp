#include "bookmodel.h"
#include "QtCore/qregularexpression.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>

BookModel::BookModel(QObject *parent)
    : QAbstractTableModel(parent)
{
}


void BookModel::loadFromCSV(QString fileName)
{
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly)) {
        qDebug() << file.errorString();
        return;
    }

    // clear previous content
    m_books.clear();

    while (!file.atEnd()) {
        QString line = file.readLine();
        QStringList fields;
        bool isInsideQuotes = false;
        QString value;

        // Custom CSV parser
        for (int i = 0; i < line.size(); ++i) {
            QChar current = line.at(i);
            if (isInsideQuotes) {
                if (current == '\"') {
                    if (i < line.size()-1 && line.at(i+1) == '\"') { // handle double quotes
                        value += current;
                        ++i; // skip next character
                    } else {
                        isInsideQuotes = false;
                    }
                } else {
                    value += current;
                }
            } else {
                if (current == '\"') {
                    isInsideQuotes = true;
                } else if (current == ',') {
                    fields.append(value.trimmed());
                    value.clear();
                } else {
                    value += current;
                }
            }
        }
        fields.append(value.trimmed()); // last field

        Book book;
        for (int i = 0; i < fields.size(); ++i) {
            QString token = fields[i];

            // remove enclosing double quotes if present
            if (token.startsWith("\"") && token.endsWith("\"")) {
                token = token.mid(1, token.length() - 2);
            }

            switch (i) {
            case 1: book.title = token; break;
            case 2: book.author = token; break;
            case 3: book.rating = token.toFloat(); break;
            case 4: book.voters = token.toInt(); break;
            case 5: book.price = token.toFloat(); break;
            case 6: book.currency = token; break;
            case 7: book.description = token; break;
            case 8: book.publisher = token; break;
            case 9: book.page_count = token.toInt(); break;
            case 10: book.genres = token; break;
            case 11: book.isbn = token; break;
            case 12: book.language = token; break;
            case 13: book.published_date = token; break;
            }
        }
        m_books.append(book);
    }

    file.close();
}





int BookModel::rowCount(const QModelIndex & /*parent*/) const
{
    return m_books.count();
}

int BookModel::columnCount(const QModelIndex & /*parent*/) const
{
    return 13; // There are 13 fields
}

QVariant BookModel::data(const QModelIndex &index, int role) const
{
    if (role == Qt::DisplayRole)
    {
        const auto & book = m_books[index.row()];
        switch(index.column()) {
        case 0: return book.title;
        case 1: return book.author;
        case 2: return book.rating;
        case 3: return book.voters;
        case 4: return book.price;
        case 5: return book.currency;
        case 6: return book.description;
        case 7: return book.publisher;
        case 8: return book.page_count;
        case 9: return book.genres;
        case 10: return book.isbn;
        case 11: return book.language;
        case 12: return book.published_date;
        default: return QVariant();
        }
    }
    return QVariant();
}
