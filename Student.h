#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include "Person.h"
#include <string>
using namespace std;

class Student {
private:
    int yearLevel;
    string major;
public:
    Student();
    Student(int yearLevel, string major) {
        this->yearLevel = yearLevel;
        this->major=major;
    }
    Person :: void display() {
        Student s = new Student();
        cout<<"Student Info:"<<endl;
        cout<<"Name"<<s.getname()<<endl;
        cout<<major<<endl;
    }
};













#endif
