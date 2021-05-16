#include <iostream>
#include <conio.h>
#include <iomanip>
using std::ostream;
using namespace std;
//base class
class Point
{
    friend ostream &operator<<(ostream &, const Point &);

public:
    Point(double a = 0, double b = 0) { setPoint(a, b); }
    void setPoint(double a, double b)
    {
        x = a;
        y = b;
    }
    void print(void) const
    {
        cout << '[' << getX() << ", " << getY() << ']';
    }
    double getX(void) const { return x; }
    double getY(void) const { return y; }

private:
    double x, y;
};

ostream &operator<<(ostream &output, const Point &p)
{
    p.print();
    return output;
}
//base class 2
class Circle
{
    friend ostream &operator<<(ostream &, const Circle &);

public:
    Circle(double r, double a, double b) : pointObject(a, b)
    {
        setRadius(r);
    }
    void setRadius(double r) { radius = r; }
    double getRadius(void) const { return radius; }
    double area(void) const
    {
        return 3.14159 * getRadius() * getRadius();
    }

    void print(void) const
    {
        cout << "Center = ";
        pointObject.print();
        cout << "; Radius = " << setiosflags(ios::fixed | ios::showpoint)
             << setprecision(2) << getRadius()
             << resetiosflags(ios::fixed | ios::showpoint);
    }

private:
    double radius;
    Point pointObject;
};

ostream &operator<<(ostream &output, const Circle &c)
{
    c.print();
    return output;
}
//class 3
class Cylinder
{
    friend ostream &operator<<(ostream &, const Cylinder &);

public:
    Cylinder(double h, double r, double x, double y)
        : circleObject(r, x, y)
    {
        height = h;
    }

    void setHeight(double h) { height = h; }
    double getHeight(void) const { return height; }

    void print(void) const
    {
        circleObject.print();
        cout << "; Height = " << getHeight() << '\n';
    }
    double area(void) const
    {
        return 2 * circleObject.area() +
               2 * 3.14159 * circleObject.getRadius() * getHeight();
    }

    double volume(void) const
    {
        return circleObject.area() * getHeight();
    }

private:
    double height;
    Circle circleObject;
};

ostream &operator<<(ostream &output, const Cylinder &c)
{
    c.print();
    return output;
}

int main()
{
    int p1, p2;
    cout << "Enter two point : ";
    cin >> p1 >> p2;
    Point p(p1, p2);
    Circle c(2.0, p1, p2);
    Cylinder cyl(5.7, 2.5, 1.2, 2.3);

    cout << "Point: " << p << "\nCircle: " << c
         << "\nCylinder: " << cyl << endl;

    return 0;
}