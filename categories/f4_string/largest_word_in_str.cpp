#include <iostream>
#include <string>
#include <string.h>

using namespace std;


int main()
{

    int n;
    cout << "enter n: \n";
    cin >> n;
    char text[n];
    cout << "enter your string: ";
    cin.get();
    gets(text);
    string result_word, temp_str1;

    for (int x = 0; x < strlen(text); x++)
    {
        if (text[x] != ' ' && (int(text[x]) >= 65 && int(text[x]) <= 90) ||
            (int(text[x]) >= 97 && int(text[x]) <= 122) || (int(text[x] >= 48 && int(text[x]) <= 57)))
        {
            result_word.push_back(text[x]);
        }
        else
        {
            break;
        }
    }

    for (int x = 0; x < strlen(text); x++)
    {
        if (text[x] != ' ' && (int(text[x]) >= 65 && int(text[x]) <= 90) ||
            (int(text[x]) >= 97 && int(text[x]) <= 122) || (int(text[x] >= 48 && int(text[x]) <= 57)))

        {
            temp_str1.push_back(text[x]);

            if (x + 1 == strlen(text) && temp_str1.length() > result_word.length())
            {
                result_word = temp_str1;
            }
        }
        else
        {
            if (temp_str1.length() > result_word.length())
            {
                result_word = temp_str1;
            }

            temp_str1.clear();
        }
    }
    cout << result_word;
    // cout << "Original String: C++ is a general-purpose programming language. \nLongest word: " << Longest_Word("C++ is a general-purpose programming language.") << endl;
    // cout << "\nOriginal String: The best way we learn anything is by practice and exercise questions. \nLongest word: " << Longest_Word("The best way we learn anything is by practice and exercise questions.") << endl;
    // cout << "\nOriginal String: Hello \nLongest word: " << Longest_Word("Hello") << endl;
    return 0;
}
