#include "roledelegate.h"

RoleDelegate::RoleDelegate(QObject *parent)
    : QStyledItemDelegate(parent)
{
}

QWidget *RoleDelegate::createEditor(QWidget *parent,
                                    const QStyleOptionViewItem &,
                                    const QModelIndex &) const
{
    QComboBox *combo = new QComboBox(parent);
    combo->addItems({"Developer", "Tester", "Manager"});
    return combo;
}

void RoleDelegate::setEditorData(QWidget *editor,
                                 const QModelIndex &index) const
{
    QString value = index.model()->data(index, Qt::EditRole).toString();

    QComboBox *combo = static_cast<QComboBox*>(editor);
    int pos = combo->findText(value);
    if (pos >= 0)
        combo->setCurrentIndex(pos);
}

void RoleDelegate::setModelData(QWidget *editor,
                                QAbstractItemModel *model,
                                const QModelIndex &index) const
{
    QComboBox *combo = static_cast<QComboBox*>(editor);
    model->setData(index, combo->currentText(), Qt::EditRole);
}
