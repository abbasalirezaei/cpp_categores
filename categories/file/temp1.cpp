#include <iostream>
#include <fstream>
using namespace std;

int maein()

{
    ofstream phone_number("file_text.txt");
    long number;
    string name;
    for (;;)
    {
        cout << "number: ";
        cin >> number;
        if (number == 0)
        {

            break;
        }
        phone_number << number << " ";
        cout << "name: ";
        cin >> name;
        phone_number << name << "\n";
    }
    phone_number.close();
    ifstream phone_book("file_text.txt");
    long n;
    string fname;
    while (!phone_book.eof())
    {
        cout << n;
        phone_book >> n;
        cout << " : " << fname;
        phone_book >> fname;
    }
    phone_book.close();

    return 0;
}