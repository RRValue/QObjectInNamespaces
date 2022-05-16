#pragma once

#include "CompC/export.h"

#include <QtCore/QObject>

class ClassB;

class COMPC_API ClassC : public QObject
{
    Q_OBJECT

public:
    ClassC();
    virtual ~ClassC();

signals:
    void goDown(QString trace);
    void goUp(QString trace);

public slots:
    void handleGoDown(QString trace);
    void handleGoUp(QString trace);

private:
    ClassB* m_ObjB;
};
