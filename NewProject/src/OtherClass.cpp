
#include "OtherClass.h"
#include "Folder/ClassInFolder.h"
#include <iostream>

OtherClass::OtherClass()
{
}

void OtherClass::doSomething()
{
    std::cout << "Hello from OtherClass!" << std::endl;

    newClass.sayHello();
    classInFolder.saySomething();
}