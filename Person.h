#ifndef BUILDER_PERSON_H
#define BUILDER_PERSON_H

#include <string>

#include "Contacts.h"

using namespace std;

class Person {
public:
    string firstName;
    string lastName;
    Contacts contacts;

    Person(string firstName, string lastName, Contacts contacts) : firstName(firstName),
                                                                   lastName(lastName),
                                                                   contacts(contacts) {}
};


#endif //BUILDER_PERSON_H
