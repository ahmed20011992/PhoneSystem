#include "phonebook.h"
#include "contact.h"


PhoneBook::PhoneBook()
{

}

vector<Contact> PhoneBook::getMycontacts()
{
    return MyContacts;
}

vector<Contact> PhoneBook::setMyContacts(vector<Contact> MyContacts00)
{
    return MyContacts = MyContacts00;
}

void PhoneBook::AddContact(Contact contact00)
{
    MyContacts.push_back(contact00);
}

Contact* PhoneBook::SearchContact(string name)
{

    for (unsigned int i =0; i < MyContacts.size() ; i ++){
        if (name == MyContacts[i].getName()){

            return & MyContacts[i];

        }


    }

    return nullptr;
}
