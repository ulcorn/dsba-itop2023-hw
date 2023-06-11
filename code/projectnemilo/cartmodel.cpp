#include "cartmodel.h"

#include <QDebug>

CartModel::CartModel(QObject* parent)
    : QAbstractTableModel(parent)
{
}

int CartModel::rowCount(const QModelIndex& /*parent*/) const
{
    return cart.count();
}

int CartModel::columnCount(const QModelIndex& /*parent*/) const
{
    return 3;
}

QVariant CartModel::data(const QModelIndex& index, int role) const
{
    if (role == Qt::DisplayRole)
    {
        const auto& book = cart[index.row()];
        switch (index.column())
        {
        case 0:
            return book.title;
        case 1:
            return book.price;
        case 2:
            return book.quantity;
        default:
            return QVariant();
        }
    }
    return QVariant();
}

QVariant CartModel::headerData(int section, Qt::Orientation orientation, int role) const
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
            case 3:
                return QString("Quantity"); // Add this line
            }
        }
    }
    return QVariant();
}

bool CartModel::removeBook(int index)
{
    if (index < 0 || index >= cart.size())
        return false;

    beginRemoveRows(QModelIndex(), index, index);
    cart.removeAt(index);
    endRemoveRows();

    return true;
}

void CartModel::addBook(Book book)
{
    beginInsertRows(QModelIndex(), cart.size(), cart.size());
    cart.append(book);
    endInsertRows();
}

void CartModel::updateQuantity(int index, int quantity)
{
    cart[index].quantity = quantity;
    if (quantity == 0)
    {
        removeRow(index);
    }
    else
    {
        emit dataChanged(createIndex(index, 0), createIndex(index, columnCount() - 1));
    }
}
float CartModel::getTotalPrice()
{
    float total = 0.0;
    for (const auto &book : cart)
    {
        total += book.price * book.quantity;
    }
    return total;
}
Book& CartModel::getBook(int index)
{
    return cart[index];
}
int CartModel::indexOfBook(const Book& book)
{
    for (int i = 0; i < cart.size(); i++)
    {
        if (cart[i].isbn == book.isbn)
        {
            return i;
        }
    }
    return -1;
}
