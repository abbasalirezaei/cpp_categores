#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Word
{
public:
    string in;
    string out;
};

class Dictionary
{

public:
    Word arry[100];
    void read_info();
    void translater(string, int);
};

void Dictionary::read_info()
{
    for (int i = 0; i < 1; i++)
    {
        cin >> arry[i].in >> arry[i].out;
    }
}

void translater(string get, int n, Dictionary arry[100])
{

    stringstream gets(get);
    string temp;
    int i = 0;

    while (gets >> temp)
    {
        for (int i = 0; i < n; i++)
        {
            if (temp == arry[i].arry->in)
            {
                cout << arry[i].arry->out << " ";
            }
        }
    }
    return;
}
int main()

{
    int n;
    cin >> n;
    Dictionary arry[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        arry[i].read_info();
    }
    string dis_user;
    // cout << "enter : ";
    cin.ignore();
    getline(cin, dis_user);
    translater(dis_user, n, arry);

    return 0;
}