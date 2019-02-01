#ifndef LIST_H
#define LIST_H
#include "Customer.h"

class list
{
protected:
    Customer* head;
    Customer* tail;
    public:
        list() : head(nullptr), tail(nullptr)
        {}
        void newcustomer(string a[])
        {
            Customer* c = new Customer(a);
            if(!head)
            {
                head = c;
                tail = c;
            }
            else
            {
                tail->setnext(c);
                c->setprev(tail);
                tail = c;
            }
        }
        void print()
        {
            Customer* temp = this->head;
            bool key = false;
            cout << "What's in the list?" << endl;
            while(key != true)
            {
                if(temp == nullptr)
                {
                    break;
                }
                cout << temp->getfirstname() << endl;
                cout << temp->getlastname() << endl;
                cout << temp->getid() << endl;
                temp = temp->getnext();
            }
        }
};

template<class T>
class HashTable : public list
{
public:
    HashTable()
    {

    }
    void insert()
    {

    }
    void resize()
    {

    }
    void linearprobing(list& obj)
    {
        Customer* temp = obj.head;
//        obj.print();
        exit(0);
    }
};

#endif // LIST_H
