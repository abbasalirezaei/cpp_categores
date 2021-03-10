#include <iostream>
using namespace std;

void to_lower(char a[])
{

    int l = 0;
    int flag = 1;

    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] = a[i] + ('a' - 'A');
        }
    }
}
int main()
{

    char str1[100];
    cout << "enter str 1" << endl;
    gets(str1);
    to_lower(str1);
    cout << str1 << endl;
    return 0;
}

// for run file   g++ lower.cpp -o App.exe -std=c++11