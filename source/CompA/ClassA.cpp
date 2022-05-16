#include "CompA/ClassA.h"

ClassA::ClassA()
{
}

ClassA::~ClassA()
{
}

void ClassA::handleGoDown(QString trace)
{
    emit goUp(trace + __FUNCTION__ + "\n");
}