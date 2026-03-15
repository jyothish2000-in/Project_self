#ifndef ROLEDELEGATE_H
#define ROLEDELEGATE_H

#include <QStyledItemDelegate>
#include <QComboBox>

class RoleDelegate : public QStyledItemDelegate
{
    Q_OBJECT
public:
    explicit RoleDelegate(QObject *parent = nullptr);

    QWidget *createEditor(QWidget *parent,
                          const QStyleOptionViewItem &option,
                          const QModelIndex &index) const override;

    void setEditorData(QWidget *editor,
                       const QModelIndex &index) const override;

    void setModelData(QWidget *editor,
                      QAbstractItemModel *model,
                      const QModelIndex &index) const override;
};

#endif
