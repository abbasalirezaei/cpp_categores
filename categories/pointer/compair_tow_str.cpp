#include <iostream>
#include <string.h>
using namespace std;

void check(char *s1, char *s2, int (*comp)(const char *, const char *))
{
    if (!(comp)(s1, s2))
    {
        cout << "equal.";
    }
    else
    {
        cout << "not equal.";
    }
}

int main()
{

    char s1[100], s2[100];
    int (*p)(const char *, const char *);

    p = strcmp;
    cout << "enter str 1: " << endl;
    cin >> s1;
    cout << "enter str 2: " << endl;
    cin >> s2;

    check(s1, s2, p);
}