#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
class Instructor {
private:
    string department;
    int experienceYears;
public:
    Instructor(string department , int experienceYears);
    void display();
};





#endif
