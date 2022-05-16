#pragma once

#include "CompB/export.h"

#include <QtCore/QObject>

class ClassA;

class COMPB_API ClassB : public QObject
{
    Q_OBJECT

public:
    ClassB();
    virtual ~ClassB();

signals:
    void goDown(QString trace);
    void goUp(QString trace);

public slots:
    void handleGoDown(QString trace);
    void handleGoUp(QString trace);

private:
    ClassA* m_ObjA;
};
