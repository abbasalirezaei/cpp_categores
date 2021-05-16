#include <iostream>
#include <string.h>
using namespace std;
int check(char *s1, char *s2)
{

    // strcmp(*s1, *s2);
    if (strcmp(s1, s2))
    {
        cout << "equal.";
    }
}
int main()
{
    char s1[100], s2[100];
    cin.ignore();
    gets(s1);
    gets(s2);
    cout << s1 << endl;
    cout << s2 << endl;
    check(s1, s2);

    return 0;
}
//  for run file g++ compare_tow_str.cpp -o App.exe