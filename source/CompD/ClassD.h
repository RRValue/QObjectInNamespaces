#pragma once

#include "CompD/export.h"

#include <QtCore/QObject>

class ClassB;

class COMPD_API ClassD : public QObject
{
    Q_OBJECT

public:
    ClassD();
    virtual ~ClassD();

signals:
    void goDown(QString trace);
    void goUp(QString trace);

public slots:
    void handleGoDown(QString trace);
    void handleGoUp(QString trace);

private:
    ClassB* m_ObjB;
};
