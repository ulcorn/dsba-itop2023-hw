#include "bookmodel.h"
#include "QtCore/qregularexpression.h"
#include <QFile>
#include <QStringList>
#include <QTextStream>
#include <QDebug>
#include <QDate>
#include <Qwidget>

BookModel::BookModel(QObject* parent)
    : QAbstractTableModel(parent)
{
}


void BookModel::loadFromCSV(QString fileName)
{
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly))
    {
        qDebug() << file.errorString();
        return;
    }
    m_books.clear();

    QTextStream in(&file);
    in.readLine();
    bool withinQuotes = false;
    bool withinDescriptionField = false;
    while (!in.atEnd())
    {
        QString line = in.readLine();

        // Custom splitting logic
        QStringList fields;
        QString currentField;
        for (int i = 0; i < line.length(); ++i)
        {
            QChar currentChar = line.at(i);
            if (currentChar == ';')
            {
                fields.append(currentField);
                currentField.clear();
            }
            else if (currentChar == '\t')
            {
                currentField.append('\n');
            }
            else if ((currentChar == ':') and fields.size() == 1)
            {
                currentField.append(':');
                currentField.append('\n');
            }
            else
            {
                currentField.append(currentChar);
            }
        }

        fields.append(currentField);

        if (fields.count() < 14) continue;

        Book book;
        book.title = fields[1];
        book.author = fields[2];
        book.rating = fields[3].toFloat();
        book.voters = fields[4].toInt();
        book.price = fields[5].toFloat();
        book.currency = fields[6];
        book.description = fields[7];
        book.publisher = fields[8];
        book.page_count = fields[9].toInt();
        book.genres = fields[10];
        book.isbn = fields[11];
        book.language = fields[12];
        book.published_date = QDate::fromString(fields[13], "MMM d, yyyy");
        m_books.append(book);
    }
    file.close();
}
QVariant BookModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role == Qt::DisplayRole)
    {
        if (orientation == Qt::Horizontal) {
            switch (section) {
            case 0:
                return QString("Book Title");
            case 1:
                return QString("Author");
            case 2:
                return QString("Price");
            }
        }
    }
    return QVariant();
}


int BookModel::rowCount(const QModelIndex& /*parent*/) const
{
    return m_books.count();
}

int BookModel::columnCount(const QModelIndex& /*parent*/) const
{
    return 3;
}

QVariant BookModel::data(const QModelIndex& index, int role) const
{
    if (role == Qt::DisplayRole)
    {
        const auto& book = m_books[index.row()];
        switch (index.column())
        {
        case 0:
            return book.title;
        case 1:
            return book.author;
//        case 2:
//            return book.rating;
//        case 3:
//            return book.voters;
        case 2:
            return book.price;
//        case 5:
//            return book.currency;
//        case 6:
//            return book.description;
//        case 7:
//            return book.publisher;
//        case 8:
//            return book.page_count;
//        case 9:
//            return book.genres;
//        case 10:
//            return book.isbn;
//        case 11:
//            return book.language;
//        case 12:
//            return book.published_date;
//        default:
//            return QVariant();
        }
    }
    return QVariant();
}
bool BookModel::removeRow(int row, const QModelIndex &parent)
{
    if (row < 0 || row >= m_books.size())
        return false;

    beginRemoveRows(parent, row, row);
    m_books.removeAt(row);
    endRemoveRows();

    return true;
}
void BookModel::addBook(const Book &book)
{
    beginInsertRows(QModelIndex(), m_books.size(), m_books.size());
    m_books.append(book);
    endInsertRows();
}
Book& BookModel::getBook(int index)
{
    return m_books[index];
}

void BookModel::updateBook(int index, const Book& book)
{
    m_books[index] = book;
    emit dataChanged(createIndex(index, 0), createIndex(index, columnCount() - 1));
}

