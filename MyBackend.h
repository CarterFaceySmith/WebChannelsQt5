#ifndef MYBACKEND_H
#define MYBACKEND_H

#include <QObject>
#include <QString>

class MyBackend : public QObject
{
    Q_OBJECT
public:
    explicit MyBackend(QObject *parent = nullptr);

public slots:
    void showAlert(const QString &message);
};

#endif // MYBACKEND_H
