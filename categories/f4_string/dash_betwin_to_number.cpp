#include <iostream>
#include <string.h>
using namespace std;

string Insert_dash(string num_str)
{

    string result_str = num_str;

    for (int x = 0; x < num_str.length() - 1; x++)
    {
        if ((num_str[x] == '1' || num_str[x] == '3' || num_str[x] == '5' || num_str[x] == '7' || num_str[x] == '9') && 
        (num_str[x + 1] == '1' || num_str[x + 1] == '3' || num_str[x + 1] == '5' || num_str[x + 1] == '7' || num_str[x + 1] == '9'))

        {
            result_str.insert(x + 1, "-");
            num_str = result_str;
        }
    }

    return result_str;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    string text;
    cin.ignore();
    cout << "Enter str1: ";
    getline(cin, text);
    cout << Insert_dash(text);

    return 0;
}

// for run file   g++ 2.cpp -o App.exe -std=c++11