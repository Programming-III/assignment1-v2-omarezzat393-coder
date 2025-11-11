
#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
class Course {
private:
    string coursecode;
    string courseName;
    int maxStudents;
    Student* students;
    int currentStudent;
public:
    Course(string coursecode,string courseName,int maxStudents,Student *students,int currentStudents ) {
        this-> coursecode=coursecode;
        this-> courseName=courseName;
        this-> maxStudents=maxStudents;
        this-> students=students;
        this->currentStudent=currentStudent;
    }
    ~Course() {
        delete students;
    }
    void addStudent(const Student& s) {
        if (currentStudent< maxStudents) {
            students[currentStudent]=s;
        }
        currentStudent++;
    }
    void displayCourseInfo() {
        cout<<"Course:" << coursecode << "-" << courseName << endl;
        cout<<"max students:"<<maxStudents<<endl;
        cout<< "";
    }

};
#endif
