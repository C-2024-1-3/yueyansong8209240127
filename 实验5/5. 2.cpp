//student.cpp
#include <iostream>
#include "标头.h"
void Student::display() const
{
    std::cout << "num： " << num << std::endl;
    std::cout << "name: " << name << std::endl;
    std::cout << "sex： " << sex << std::endl;
}
void Student::set_value(int n, const char* na, char s)
{
    num = n;
    strcpy_s(name, na);
    sex = s;
}