//main.cpp
#include <iostream>
#include "БъЭЗ.h"
int main()
{
    Student stud{};
    stud.set_value(007, "tcg", 'm');
    stud.display();
    return 0;
}