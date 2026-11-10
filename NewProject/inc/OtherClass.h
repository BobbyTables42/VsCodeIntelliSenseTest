#pragma once

#include "NewClass.h"
#include "Folder/ClassInFolder.h"

class OtherClass
{
public:
    OtherClass();

    void doSomething();

private:
    NewClass newClass;
    ClassInFolder classInFolder;
};