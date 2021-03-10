#include <iostream>
using namespace std;
int main()
{

    cout << "the assci value of a: " << int('a') << endl;
    cout << "the assci value of z: " << int('z') << endl;
    cout << "============" << endl;
    cout << "the assci value of A: " << int('A') << endl;
    cout << "the assci value of Z: " << int('Z') << endl;
    cout << "============" << endl;
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        cout << ch << " " << int(ch) << endl;
    }
    return 0;
}

// for run file   g++ assci_code.cpp -o App.exe -std=c++11