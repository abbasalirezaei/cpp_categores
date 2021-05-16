#include <iostream>
using namespace std;

class Word
{
public:
    int age;

    Word(int a)
    {
        age = a;
    }
    ~Word()
    {
        cout << endl<<"your program is kharab shod....";
    }
};

int main()
{
    Word y(19);
    cout << y.age;
    return 0;
}