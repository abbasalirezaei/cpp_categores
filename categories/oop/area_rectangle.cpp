#include <iostream>
using namespace std;

class rectangle
{
private:
    int x, y;                 // The class
public:                       // Access specifier
    void set_Value(int, int); // Method/function declaration

    int area()
    {
        return x * y;
    }
};

// Method/function definition outside the class
void rectangle::set_Value(int a, int b)
{
    x = a;
    y = b;
}

int main()
{
    int x, y;
    cout << "enter your number: ";
    cin >> x >> y;

    rectangle myObj;       // Create an object of MyClass
    myObj.set_Value(x, y); // Call the method
    cout << myObj.area();
    return 0;
}