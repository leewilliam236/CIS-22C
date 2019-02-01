#include "list.h"
#include <Windows.h>

using namespace std;

void commas(string, string []);

int main()
{
    ifstream infile;
    string tkcal, array[3];
    infile.open("Customer.csv");
    if(!infile)
    {
        cout << "Can't open file." << endl;
        exit(0);
    }
    list lol;
    while(!infile.eof())
    {
        getline(infile, tkcal);
        if(infile.eof())
            break;
        commas(tkcal, array);
        lol.newcustomer(array);
    }
    HashTable<int>* ihatemylife = new HashTable<int>[10];
    ihatemylife->linearprobing(lol);
//    lol.print();
    infile.close();
    return 0;
}

void commas(string line, string data[])
{
    unsigned int count = 0;
    size_t pos = 0, posprev = 0;
    while(count < 3)
    {
        pos = line.find(",", posprev);
        data[count] = line.substr(posprev, pos-posprev);
        posprev = pos + 1;
        count++;
    }
}
