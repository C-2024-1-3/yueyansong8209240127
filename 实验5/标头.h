#pragma once
//student.h
class Student
{
public:
    //���ó�Ա����ԭ������
    void display() const;
    void set_value(int n, const char* na, char s);
private:
    int num;
    char name[20];
    char sex;
};