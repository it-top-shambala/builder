#ifndef BUILDER_CONTACTS_H
#define BUILDER_CONTACTS_H

#include <string>

using namespace std;

class Contacts {
public:
    string phone;
    string email;
    string address;

    Contacts(string phone, string email, string address) : phone(phone),
                                                            email(email),
                                                            address(address) {}
};


#endif //BUILDER_CONTACTS_H
