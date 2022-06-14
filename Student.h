#ifndef BUILDER_STUDENT_H
#define BUILDER_STUDENT_H

#include <string>

#include "Person.h"

using namespace std;

class Student {
public:
    Person personInfo;
    string faculty;

    Student(Person personInfo, string faculty) : personInfo(personInfo), faculty(faculty) {}
};


#endif //BUILDER_STUDENT_H
