#ifndef BOOKMODEL_H
#define BOOKMODEL_H

#include <QAbstractTableModel>
#include <QVector>
#include <QString>
#include <QVariant>
#include <QDate>

struct Book
{
    QString title;
    QString author;
    float rating;
    int voters;
    float price;
    QString currency;
    QString description;
    QString publisher;
    int page_count;
    QString genres;
    QString isbn;
    QString language;
    QDate published_date;
};
class BookModel : public QAbstractTableModel
{

public:
    explicit BookModel(QObject *parent = nullptr);
    void loadFromCSV(QString fileName);
    void addBook(const Book &book);
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;
    void updateBook(int index, const Book& book);
    bool removeRow(int row, const QModelIndex &parent = QModelIndex());
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
    Book& getBook(int index);
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

private:
    QVector<Book> m_books;
};

#endif // BOOKMODEL_H
