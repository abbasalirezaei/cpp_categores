#include <iostream>
using namespace std;
void find_and_change(int n, char *s1, char *s2)
{
    int i;
    for (i = 0; s1[i] = '\0'; i++)
    {
        *(s2 + i) = *(s2 + i);
    }
    s2[n] = '\0';
}

int main()
{
    int n;

    char *s1, *s2;
    s1 = new char[n];
    s2 = new char[n];
    cin >> n;
    cin.ignore();
    cout << "enter yout str: ";
    cin.get(s1, n);

    find_and_change(n, s1, s2);
    cout << s2 << endl;

    return 0;
}