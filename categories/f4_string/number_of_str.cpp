#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    char a[101];
    cout << "enter str 1" << endl;
    gets(a);
    int counter = 0;
    int counter_a = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        counter++;
        if (a[i] == 'a')
        {
            counter_a++;
        }
    }

    cout << "number of char in str: " << counter << endl;
    cout << "number of  a   in str: " << counter_a << endl;

    return 0;
}

// for run file   g++ number_of_str.cpp -o App.exe