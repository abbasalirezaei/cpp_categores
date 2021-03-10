#include <bits/stdc++.h>
#include <iostream>

#include <algorithm>
#include <string>

using namespace std;

void to_upper(char a[])
{

    int l = 0;
    int flag = 1;

    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] = a[i] + ('A' - 'a');
        }
    }
}
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
                if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u' || text[i] == 'y')
                    ++ctr;
                if (text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U' || text[i] == 'Y')
                    ++ctr;
            }
            if (ctr == 0)
            {
                text_upper = text;
                transform(text_upper.begin(), text_upper.end(), text_upper.begin(), ::toupper);
                // cout << text_upper << endl;
                if (text_upper == text)
                {
                    cout << "yes";
                }
                else
                {
                    cout << text << " ";
                    // cout << ctr << endl;
                    //   cout << text_upper << endl;
                    cout << "no moshkel dare";
                }
            }
        }
        // else if (/* condition */)
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
