#ifndef BUILDER_TEACHERBUILDER_H
#define BUILDER_TEACHERBUILDER_H

#include <string>

#include "PersonInfo.h"
#include "Contacts.h"
#include "Teacher.h"

using namespace std;

class TeacherBuilder {
private:
    PersonInfo* _personInfo;
    Contacts* _contacts;
    string _subject;

public:
    void UsePersonInfo(string firstName, string lastName){
        _personInfo = new PersonInfo(firstName, lastName);
    }

    void UseContacts(string phone, string email, string address) {
        _contacts = new Contacts(phone, email, address);
    }

    void UseSubject(string subject) {
        _subject = subject;
    }

    Teacher* CreateTeacher() {
        return new Teacher(_personInfo, _contacts, _subject);
    }

};


#endif //BUILDER_TEACHERBUILDER_H
