#include <iostream>
using namespace std;

class Rectangle
{
    int len;
    int withd;

public:
    Rectangle()
    {
        len = 0;
        withd = 0;
    }
    Rectangle(int x, int y)
    {
        len = x;
        withd = y;
    }
    float find_area()
    {

        return 2 * (len + withd);
    };
    float state()
    {

        return (len * withd);
    };
    ~Rectangle()
    {
        cout << endl
             << "end of program...";
    }
};
int main()
{
    Rectangle x, y(4, 3);
    cout << "the ara of y is: " << y.find_area()<<endl;
    cout << "the state of y is: " << y.state();
    cout << endl;
    cout << "the ara of x is: " << x.find_area()<<endl;
    cout << "the state of x is: " << x.state();
    return 0;
}
