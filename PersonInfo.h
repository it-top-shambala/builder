#ifndef BUILDER_PERSONINFO_H
#define BUILDER_PERSONINFO_H

#include <string>

using namespace std;

class PersonInfo {
public:
    string firstName;
    string lastName;

    PersonInfo(string firstName, string lastName) : firstName(firstName), lastName(lastName) {}
};


#endif //BUILDER_PERSONINFO_H
