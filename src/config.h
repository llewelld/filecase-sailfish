#ifndef CONFIG_H
#define CONFIG_H

#include <QQuickItem>

class Config : public QQuickItem
{
    Q_OBJECT

public:
    //Q_INVOKABLE QString getTheme();

    Q_INVOKABLE QString readConfig(QString data1, QString data2);
    Config(QQuickItem *parent = 0);

public slots:
    void setConfig(QString data1, QString data2);
    void removeConfig(QString data1);


};

#endif // CONFIG_H
