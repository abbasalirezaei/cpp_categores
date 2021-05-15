#include <iostream>

using namespace std;
class base
{
private:
    int i, j;
public:
    void set(int a, int b)
    {
        i = a;
        j = b;
    };
    void show()
    {
        cout << "i and j are equal to ==>" << i << "  " << j;
    };
};

class derived : public base
{
private:
    int k;

public:
    derived(int c)
    {
        k = c;
    };
    void show()
    {
        cout << "k equal to      => " << k;
    }
};

int main()
{
    derived obj(2);
    obj.set(3, 3);
}