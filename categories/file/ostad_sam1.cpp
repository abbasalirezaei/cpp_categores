#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    // ostream fs("tese.dat");
    ofstream fo("test.dat");

    if (!fo)
    {
        cout << "this file dose not exsits .press any key to exit.!!!";
        cin.get();
        exit(0);
    }

    string your_str;
    cout << "Enter your string (_ for quit enter 0 _).\n";
    for (;;)
    {
        cout << "your str: ";
        cin >> your_str;
        if (your_str == "0")
        {
            break;
        }

        fo << your_str << endl;
    }
    fo.close();
    string str;
    ifstream open_myfile("test.dat");
    while (!open_myfile.eof())
    {
        cout << str;
        open_myfile >> str;

        cout << endl;
    }
    open_myfile.close();
}