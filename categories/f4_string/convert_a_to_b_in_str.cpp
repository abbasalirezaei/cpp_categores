#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    char a[101], b, c;
    cout << "enter main str: " << endl;
    gets(a);
    cout << "main str before conveting: " << a << endl;
    cout << "enter char 1: " << endl;
    cin >> b;
    cout << "enter char 2: " << endl;
    cin >> c;

    for (int i = 0; a[i] != '\0'; i++)
    {

        if (a[i] == b)
        {
            a[i] = c;
        }
    }

    cout << "main str after conveting: " << a << endl;

    return 0;
}

// for run file   g++ convert_a_to_b_in_str.cpp -o App.exe