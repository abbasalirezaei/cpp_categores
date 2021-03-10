#include <iostream>
using namespace std;
int main()
{
    char fname[20];
    cout << "enter your fullname: ";
    gets(fname);
    for (int i = 0; fname[i] != '\0'; i++)
    {
        if (fname[i] == ' ')
        {
            fname[i] = '\t';
        }
    }

    cout << "fname: " << fname;
    return 0;
}

// for run file   g++ space_to_tab.cpp -o App.exe -std=c++11