#include <iostream>

#include <fstream>
using namespace std;

int main()
{
    string filename, name_of_book;
    cout << "enter the name of file that you want...\n";
    getline(cin, filename);
    int numberofcloseprant = 0, numberofopenprant = 0,
        numberofclosebracet = 0, numberofopenbracet = 0;

    ifstream f2(filename);
    char resule_name;
    while (!f2.eof())
    {
        f2 >> resule_name;
        switch (resule_name)
        {
        case '[':
            numberofopenbracet++;
            break;
        case ']':
            numberofclosebracet++;
            break;
        case '(':
            numberofopenprant++;
            break;
        case ')':
            numberofcloseprant++;
            break;

        default:
            break;
        }
    }
    f2.close();
    cout << "numberofopenbracet    is: " << numberofopenbracet << endl;
    cout << "numberofclosebracet   is: " << numberofclosebracet << endl;
    cout << "numberofopenprant     is: " << numberofopenprant << endl;
    cout << "numberofcloseprant    is: " << numberofcloseprant << endl;
}