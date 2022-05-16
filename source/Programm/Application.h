#pragma once

#include <QtCore/QCoreApplication>

class Application : public QCoreApplication
{
    Q_OBJECT;

public:
    using QCoreApplication::QCoreApplication;

signals:
    void goDown(QString trace);

public slots:
    void onRun();
    void handleGoUp(QString trace);
};