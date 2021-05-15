#include <iostream>
using namespace std;

class Circle
{
    float radus;

public:
    Circle()
    {
        radus = 0;
    }
    Circle(float x)
    {
        radus = x;
    }
    ~Circle()
    {
        cout << endl
             << "end of program...";
    }
    float find_area()
    {
        int p = 3.14;
        return 2 * p * radus;
    };
};
int main()
{
    Circle x, y(19);
    cout << "the ara of y is: " << y.find_area();
    // cout << x.radus;
    return 0;
}
