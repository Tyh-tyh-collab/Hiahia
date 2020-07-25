#ifndef PATIENTMODEL_H
#define PATIENTMODEL_H

#include <QObject>
#include <QSqlQueryModel>
#include <QString>
#include <QVariant>
#include <QModelIndex>


class PatientModel : public QSqlQueryModel
{
    Q_OBJECT
public:
    PatientModel();
    bool setName(int id, QString name);
    bool setSex(int id, QString sex);
    bool setData(const QModelIndex &index, const QVariant &value, int /* role */);

    Qt::ItemFlags flags(const QModelIndex &index) const override;
};

#endif // PATIENTMODEL_H
