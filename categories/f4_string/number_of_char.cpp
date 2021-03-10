#include <iostream>
using namespace std;
int main()
{
    char fname[20];
    cout << "enter your fullname: ";
    int counter = 0;
    gets(fname);
    for (int i = 0; fname[i] != '\0'; i++)
    {
        if (fname[i] != ' ')
        {
           counter++;
        }
    }

    cout << "counter: " << counter;
    return 0;
}

// for run file   g++ number_of_char.cpp -o App.exe -std=c++11