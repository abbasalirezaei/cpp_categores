#include <iostream>

using namespace std;

class Rectangle
{
private:
    double lenght, width;

public:
    Rectangle(double = 0, double = 0);
    void set_width(double b);
    void set_lenght(double a);
    double perimeter();
    double area();
};

Rectangle::Rectangle(double arze, double tool)
{
    set_lenght(tool);
    width = arze;
    lenght = tool;
}
void Rectangle::set_width(double arze)
{
    lenght = (arze > 0 && arze < 20) ? arze : 1;
}
void Rectangle::set_lenght(double tool)
{
    lenght = (tool > 0 && tool < 20) ? tool : 1;
}
double Rectangle::area(void)
{
    return lenght * width;
}
double Rectangle::perimeter(void)
{
    return 2 * (lenght + width);
}
int main()
{
    int a, b;
    cout << "enter the width and lenght : ";
    cin >> a >> b;
    Rectangle obj1(a, b);

    obj1.perimeter();
    cout << "mohit rectangle: " << obj1.perimeter();
    cout << "\nmasahat rectangle: " << obj1.area();
    ;
}
