#include "contact.h"
#include <iostream>
#include "phonebook.h"

using namespace std;

int main()
{
    PhoneBook a;


    while(true ){
        cout << " if you want to enter a new contact please enter number 1" << endl;
        cout << " if you want to search a new contact please enter number 2" << endl;

        int i ;
        cin >> i;
        if (i ==1){

            cout << "enter new contact:" << endl;
            string number;
            cout << "enter number:";
            cin >> number;


            string name;
            cout << "enter name:";
            cin >> name;


            string email;
            cout << "enter email:";
            cin >> email;


            string adress;
            cout << "enter adress:";
            cin >> adress;

            Contact b(number, name, email , adress);

            b.print();
            a.AddContact(b);
            cout << "contact size is : " << a.getMycontacts().size()  << endl;
        }

        else if (i ==2){
            string name00;
            cout << " Plase enter the name of cotntact that you looking for" << endl;
            cin >> name00;
            Contact *c = a.SearchContact(name00);

            if (c != nullptr){
                cout << endl << " yah here I have the conytact you need :" << endl;
                cout << endl << c->getName()  << endl <<  endl;

                c->print();
            }
            else {
                cout << " sorry i do not have this number" << endl;
            }

        }
        else  {
            cout << " the choesed number is not 1 so you wont to enter a new contact  " << endl;
            return 0;
        }

        //        b.setEmail("XXL");
        //        b.print();
    }
    return 0;
}
