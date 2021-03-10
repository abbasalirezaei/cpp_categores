// Write a C++ program to change every letter in a given string with the letter following it in the alphabet (ie. a becomes b, p becomes q, z becomes a).
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;


    char text[n];
    cin.ignore();
    cout << "Enter str1: ";
    gets(text);
    bool flag;
    char ch;

    do
	{
		flag = false;

		for (int x = 0; x < strlen(text) - 1; x++)
		{
			if (text[x] > text[x + 1])
			{
				ch = text[x];
				text[x] = text[x + 1];
				text[x + 1] = ch;
				flag = true;
			}
		}
	} while (flag);

	// Remove spaces
	string str;
	for (int y = 0; y <strlen(text); y++)
	{
		if (text[y] != ' ')
		{
			str.push_back(text[y]);
		}
	}
    cout << str;

    return 0;
}

// for run file   g++ 2.cpp -o App.exe -std=c++11