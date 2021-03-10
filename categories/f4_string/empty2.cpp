#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
#include <cstring>
#include <string>
#include <cctype>
using namespace std;

void printWords(string str)
{
    // word variable to store word
    string text;
    string text_upper;

    // making a string stream
    stringstream iss(str);

    // Read and print each word.
    while (iss >> text)
    {
        int ctr = 0;
        
        if (int(text.size()) >= 5)
        {
            for (int i = 0; i < int(text.size()); i++)
            {
                if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u')
                    ++ctr;
                if (text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U')
                    ++ctr;
            }
            cout << text << " ";
            cout << ctr << endl;


        }
        
        // |
        // if (toupper(text) == "al")
        // {
        //     /* code */
        // }
    }
}

// Driver code
int main()
{
    // int n;
    // cout << "enter n: ";
    // cin >> n;
    cout << "enter n: ";
    string s;
    getline(cin, s);

    printWords(s);
    return 0;
}
