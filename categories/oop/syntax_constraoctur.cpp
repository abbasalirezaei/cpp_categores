#include <iostream>
using namespace std;

class Word
{
public:
    string name;
    int age;
    Word()
    {

        name = "abbasali";
        age = 20;
    }
    void display()
    {

        cout << name << " " << age;
    }
};

int main()
{
    Word x;
    x.display();
    return 0;
}