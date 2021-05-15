#include <iostream>

using namespace std;
class base
{
private:
    int i, j;

public:
    // base() { cout << "this is a constractor in base class"; };
    base(int a, int b)
    {
        i = a;
        j = b;
        cout << "this is a constractor in base class and thir anr arg";
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
    // derived() { cout << "this is a constractor in derived class"; };
    derived(int c, int a, int b) : base(a, b)
    {
        k = c;
        cout << "this is a constractor in dericed class and thir anr arg";
    };
    void show()
    {
        cout << "k equal to      => " << k;
    }
};

int main()
{
    derived obj(2, 4, 3);

    cout << endl;
    obj.base::show();
}