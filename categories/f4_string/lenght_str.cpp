// lenght_str

#include <iostream>
using namespace std;
void lenght_str(char str[])
{
    int counter = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        // if (str[i] != ' ')
        // {
            counter++;
        // }
    }
    cout << counter;
}
int main()
{
    char str[100];
    gets(str);
    lenght_str(str);
    return 0;
}

    // for run file   g++ lenght_str.cpp -o App.exe -std=c++11