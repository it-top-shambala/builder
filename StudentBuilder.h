#ifndef BUILDER_STUDENTBUILDER_H
#define BUILDER_STUDENTBUILDER_H

#include <string>

#include "Student.h"
#include "Person.h"
#include "Contacts.h"

using namespace std;

class StudentBuilder {
public:
    static Student* Build(string firstName, string lastName, string phone, string email, string address, string faculty) {
        Contacts* contacts = new Contacts(phone, email, address);
        Person* person = new Person(firstName, lastName, *contacts);
        return new Student(*person, faculty);
    }


};


#endif //BUILDER_STUDENTBUILDER_H
