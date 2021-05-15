#include <iostream>
using namespace std;

int main()
{
    int size = 0;
    cout << "enter the sizo of an arry: ";
    cin >> size;
    cin.ignore();
    string *arry = new string[size];

    for (int i = 0; i < size; i++)
    {
        cout << "\n enter your word: ";
        getline(cin, arry[i]);
    }
    cout << endl;
    string temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arry[j] > arry[j + 1])
            {

                temp = arry[j];
                arry[j] = arry[j + 1];
                arry[j + 1] = temp;
              
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arry[i] << endl;
    }

    return 0;
}