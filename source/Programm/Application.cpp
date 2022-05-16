#include "Programm/Application.h"

#include "CompA/ClassA.h"
#include "CompB/ClassB.h"
#include "CompC/ClassC.h"
#include "CompD/ClassD.h"

void Application::onRun()
{
    const auto obj_c = ClassC();

    connect(this, &Application::goDown, &obj_c, &ClassC::handleGoDown);
    connect(&obj_c, &ClassC::goUp, this, &Application::handleGoUp);
    
    emit goDown(QString(__FUNCTION__) + "\n");
    
    exit();
}

void Application::handleGoUp(QString trace)
{
    qDebug().noquote() << (trace + __FUNCTION__ + "\n");
}