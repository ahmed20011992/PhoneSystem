#include "contact.h"
#include <vector>
vector <string> MyContacts;

Contact::Contact()
{

}

Contact::Contact(string number, string name, string email, string adress)
{
    m_name = name;
    m_adress = adress;
    m_email = email;
    m_number = number;

}
string Contact::getNumber()
{

    return m_number;

}

string Contact::getName()
{
    return m_name;
}

string Contact::getEmail()
{
    return m_email;
}

string Contact::getAdress()
{
    return m_adress;
}

void Contact::setNumber(string number)
{
    m_number = number;

}

void Contact::setName(string name)
{
    m_name = name;
}

void Contact::setEmail(string email)
{
    m_email = email;
}

void Contact::setAdress(string adress)
{
    m_adress = adress;
}

void Contact::print()
{
    cout << " contact information:" << endl;
    cout << " name: "<< getName() << endl ;
    cout << " email: "<< m_email << endl ;
    cout << " number: "<< m_number << endl ;
    cout << " adress: "<< m_adress << endl ;

}
