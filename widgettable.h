#ifndef WIDGETTABLE_H
#define WIDGETTABLE_H

#include <QWidget>
#include <QLineEdit>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QSqlError>
#include <QDateTime>
#include <QSqlQueryModel>
#include <QTableView>
#include <QPushButton>
#include "patientmodel.h"

class WidgetTable : public QWidget
{
    Q_OBJECT
public:
    explicit WidgetTable(QWidget *parent = nullptr);

signals:

public slots:
    void sendCmd();

private:
    QLineEdit * editId;
    QLineEdit * editName;
    QLineEdit * editSex;
    QPushButton *btnSendCmd;

    QSqlDatabase db;

    PatientModel *patientsModel;
    QTableView * patientTableView;

};

#endif // WIDGETTABLE_H
