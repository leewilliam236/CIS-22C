#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Customer
{
    private:
        string lastname;
        string firstname;
        string id;
        Customer* next;
        Customer* prev;
    public:
        Customer()
        {
            cout << "Called it." << endl;
        }
        Customer(string a[])
        {
            lastname = a[0];
            firstname = a[1];
            id = a[2];
        }
        string getlastname()
        {
            return lastname;
        }
        string getfirstname()
        {
            return firstname;
        }
        string getid()
        {
            return id;
        }
        void setnext(Customer* c)
        {
            this->next = c;
        }
        void setprev(Customer* c)
        {
            this->prev = c;
        }
        Customer* getnext()
        {
            return next;
        }
};

#endif // CUSTOMER_H
