#include <iostream>
using namespace std;

class circle
{
private:
    float radius; // The class
public:           // Access specifier
    void read_radius();
    float find_area();
    void display_area();
};

// Method/function definition outside the class
void circle::read_radius()
{
    cout << "enter the radius of your circle: ";
    cin >> radius;
}
float circle::find_area()
{
    float area = 0;
    area = radius * radius * 3.14;
    return area;
}
void circle::display_area()
{
    cout << "the area of your circle is: " << find_area();
}
int main()
{
    circle obj1;
    obj1.read_radius();
    obj1.display_area();

    return 0;
}