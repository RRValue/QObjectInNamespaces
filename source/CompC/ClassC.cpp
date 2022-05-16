#include "CompC/ClassC.h"

#include "CompB/ClassB.h"

ClassC::ClassC() : m_ObjB{new ClassB}
{
    connect(this, &ClassC::goDown, m_ObjB, &ClassB::handleGoDown);
    connect(m_ObjB, &ClassB::goUp, this, &ClassC::handleGoUp);
}

ClassC::~ClassC()
{
    delete m_ObjB;
}

void ClassC::handleGoDown(QString trace)
{
    emit goDown(trace + __FUNCTION__ + "\n");
}

void ClassC::handleGoUp(QString trace)
{
    emit goUp(trace + __FUNCTION__ + "\n");
}