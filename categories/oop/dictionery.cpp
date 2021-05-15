#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class word
{
public:
    string in;
    string out;
};
void translater(string get, int n, word kalame[100])
{
    stringstream gets(get);
    string sto;
    int i = 0;
    while (gets >> sto)
    {
        for (int i = 0; i < n; i++)
        {
            if (sto == kalame[i].in)
            {
                cout << kalame[i].out << " ";
            }
        }
    }
    return;
}
int main()
{
    int n;
    cin >> n;

    word kalame[n];
    for (int i = 0; i < n; i++)
    {
        cin >> kalame[i].in >> kalame[i].out;
    }
    cin.ignore();
    string get;
    getline(cin, get);
    translater(get, n, kalame);
    return 0;
}
