#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

void to_upper(string a)
{

    int l = 0;
    int flag = 1;

    // for (int i = 0; i < int(a.size()); i++)
    // {
    //     a[i] = toupper(a[i]);
    // }
    string str = a;
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str;
}
int main()
{

    // char str1[100];
    cout << "enter str 1" << endl;
    string str1;
    // gets(str1);
    getline(cin, str1);
    to_upper(str1);

    return 0;
}

// for run file   g++ upper.cpp -o App.exe -std=c++11