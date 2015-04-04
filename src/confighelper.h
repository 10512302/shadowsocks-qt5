#ifndef CONFIGHELPER_H
#define CONFIGHELPER_H

#include <QStandardItemModel>
#include <QList>
#include "connection.h"

class ConfigHelper : public QObject
{
    Q_OBJECT

public:
    ConfigHelper(QObject *parent);
    ~ConfigHelper();

    QStandardItemModel *getModel() const;
    void save();

private:
    QStandardItemModel *model;
    QString jsonconfigFile;
    QList<Connection*> connectionList;

    void readConfiguration();
    void fillModel();

    static const QStringList headerLabels;
};

#endif // CONFIGHELPER_H