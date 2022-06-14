#ifndef BUILDER_TEACHER_H
#define BUILDER_TEACHER_H

#include <string>

#include "PersonInfo.h"
#include "Contacts.h"

using namespace std;

class Teacher {
public:
    PersonInfo* personInfo;
    Contacts* contacts;
    string subject;

    Teacher(PersonInfo *personInfo, Contacts *contacts, string subject) : personInfo(personInfo),
                                                                                 contacts(contacts),
                                                                                 subject(subject) {}
};


#endif //BUILDER_TEACHER_H
