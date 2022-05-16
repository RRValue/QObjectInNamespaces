#include "CompD/ClassD.h"

#include "CompB/ClassB.h"

ClassD::ClassD() : m_ObjB{new ClassB}
{
    connect(this, &ClassD::goDown, m_ObjB, &ClassB::handleGoDown);
    connect(m_ObjB, &ClassB::goUp, this, &ClassD::handleGoUp);
}

ClassD::~ClassD()
{
    delete m_ObjB;
}

void ClassD::handleGoDown(QString trace)
{
    emit goDown(trace + __FUNCTION__ + "\n");
}

void ClassD::handleGoUp(QString trace)
{
    emit goUp(trace + __FUNCTION__ + "\n");
}