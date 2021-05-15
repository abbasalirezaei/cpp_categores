#include <iostream>
#include <cstring>
using namespace std;
class stringclass
{
private:
    char s[255];

public:
    void get()
    {

        cout << "enter your string : ";
        cin.getline(s, 255);
    };
    void print()
    {
        cout << s;
    }
    stringclass operator+(stringclass const &obj)

    {
        int i = 0, j = 0;
        stringclass temp;

        int l = 0;
        for (int i = 0; s[i] != '\0'; i++)
        {
            l++;
        }
        for (int i = 0; obj.s[i] != '\0'; i++)
        {
            s[l++] = obj.s[l++];
        }
        s[i] = '\0';
    }
};

int main()
{
    stringclass obj1, obj2, obj3;
    obj1.get();
    obj2.get();
    cout << endl;
    obj1.print();
    cout << endl;
    obj2.print();

    obj3 = obj1 + obj2;
    obj3.print();

    return 0;
}