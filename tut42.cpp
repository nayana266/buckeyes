#include <iostream>
#include "donut.h"
using namespace std;

int main()
{
    Donut donutObject;
    Donut *donutPointer = &sallyObject;

    donutObject.printThis();
    donutPointer->printThis();
}
