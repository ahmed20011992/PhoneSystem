#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>
#include <vector>
using namespace std;


class Contact
{

public:
    Contact();
    Contact(string number, string name, string email, string adress);

    string getNumber();
    string getName();
    string getEmail();
    string getAdress(); // for reading

    void setNumber(string number); // for writing
    void setName(string name);
    void setEmail(string email);
    void setAdress(string adress);
    void print();
private:
    string m_number;
    string m_name;
    string m_email;
    string m_adress;
   // vector  <string> MyContacts [0]{};

};

#endif // CONTACT_H
