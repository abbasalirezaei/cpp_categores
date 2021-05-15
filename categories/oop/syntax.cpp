#include <iostream>
using namespace std;

class MyClass
{
private:
    string fname;    // The class
public:              // Access specifier
    void myMethod(); // Method/function declaration
};

// Method/function definition outside the class
void MyClass::myMethod()
{
    cout << "enter your name: ";
    cin >> fname;
}

int main()
{
    MyClass myObj;    // Create an object of MyClass
    myObj.myMethod(); // Call the method
    return 0;
}