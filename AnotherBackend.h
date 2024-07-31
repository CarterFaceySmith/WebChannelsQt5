#ifndef ANOTHERBACKEND_H
#define ANOTHERBACKEND_H

#include <QObject>
#include <QString>

class AnotherBackend : public QObject
{
    Q_OBJECT
public:
    explicit AnotherBackend(QObject *parent = nullptr);

public slots:
    void logMessage(const QString &message);
};

#endif // ANOTHERBACKEND_H
