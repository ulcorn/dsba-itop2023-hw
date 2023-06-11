#ifndef CARTMODEL_H
#define CARTMODEL_H

#include <QAbstractTableModel>
#include "bookmodel.h"

class CartModel : public QAbstractTableModel
{
    Q_OBJECT

public:
    explicit CartModel(QObject *parent = nullptr);

    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;
    bool removeBook(int index);
    void addBook(Book book);
    void updateQuantity(int index, int quantity);
    float getTotalPrice();
    Book& getBook(int index);
    int indexOfBook(const Book& book);
private:
    QVector<Book> cart;
};

#endif // CARTMODEL_H
