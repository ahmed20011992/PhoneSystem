#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include "contact.h"
#include<vector>
using namespace std;

class PhoneBook
{
public:

    PhoneBook();


    vector<Contact> getMycontacts();
    vector<Contact> setMyContacts(vector<Contact> MyContacts00);

    void  AddContact(Contact contact);
    Contact* SearchContact(string name);

private:
      vector<Contact>MyContacts;
};

#endif // PHONEBOOK_H
