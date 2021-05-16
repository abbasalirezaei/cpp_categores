#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // ofstream phone_file("phone.txt");
    // long number;
    // string name;

    // cout << "enter a number for each name (0 for quit).!"<<endl;
    // for (;;)
    // {
    //     cout << "number ";
    //     cin >> number;
    //     if (number == 0)
    //     {
    //         break;
    //     }
    //     phone_file << number << ' ';

    //     cout << "Name ";
    //     cin >> name;
    //     phone_file << name << ' ';
    //     cout << endl;
    // }

    //---------------- search in file
    ifstream phone_file("phone.txt");
    long number;
    string name, search_name;
    cout << "enter the name that you want me find in the phonebook.";
    cin >> search_name;
    bool is_find = false;
    while (phone_file >> number)
    {
        phone_file >> name;
        if (name == search_name)
        {
            cout << name << " : " << number <<endl;
            is_find = true;
            break;
        }
    }
    if (is_find == false)
    {
        cout << search_name << " is not in the phonebook.";
    }

    return 0;
}