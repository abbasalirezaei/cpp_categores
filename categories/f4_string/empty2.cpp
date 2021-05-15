#include <iostream >
using namespace std;
int main()
{
    char string[20][5];
    int number = 20;

    //input
    for (int i = 0; i < 5; i++)
        cin.getline(string[i], 20);

    //output
    for (int i = 0; i < number; i++)
        cout << string[i] << endl;

    return (0);
}