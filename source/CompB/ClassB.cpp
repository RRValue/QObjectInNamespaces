#include "CompB/ClassB.h"

#include "CompA/ClassA.h"

ClassB::ClassB() : m_ObjA{new ClassA}
{
    connect(this, &ClassB::goDown, m_ObjA, &ClassA::handleGoDown);
    connect(m_ObjA, &ClassA::goUp, this, &ClassB::handleGoUp);
}

ClassB::~ClassB()
{
    delete m_ObjA;
}

void ClassB::handleGoDown(QString trace)
{
    emit goDown(trace + __FUNCTION__ + "\n");
}

void ClassB::handleGoUp(QString trace)
{
    emit goUp(trace + __FUNCTION__ + "\n");
}