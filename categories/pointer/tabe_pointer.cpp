#include <iostream>
using namespace std;
void find_and_change(int n, char *nEw, char *old)
{
    int i;
    for (i = 0; i < n; i++)
    {
        old[i] = nEw[i];
        nEw[n+1] = '\0';
    }
    
}

int main()
{
    int n;
    cin >> n;
    char *inpu, *output;
    inpu = new char[100];
    output = new char[100];
    cin.ignore();
    cout << "enter yout str: ";
    cin.get(inpu, 100);
    find_and_change(n, inpu, output);
    cout << output << endl;

    return 0;
}