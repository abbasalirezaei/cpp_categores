#include <iostream>
#include <math.h>
using namespace std;
struct Coor2D
{

    int x;
    int y;
};
Coor2D Input()
{
    Coor2D a;
    cin >> (a).x;
    cin >> (a).y;
    return a;
}
void addcoor2d(Coor2D *a, Coor2D *b)
{
    cout <<"addcoor2d "<< (*a).x + (*b).x << " " << (*a).y + (*b).y;
}
void subcoor2d(Coor2D *a, Coor2D *b)
{
 cout << "subcoor2d " <<  (*b).x - (*a).x << " " << (*b).y - (*a).y;
}
void EuclideanCoor2D(Coor2D *a, Coor2D *b)
{
    double x = ((*a).x - (*b).x) * ((*a).x - (*b).x);
    double y = ((*a).y - (*b).y) * ((*a).y - (*b).y);
    // return sqrt(x + y);
    cout << "euclidean " << sqrt(x + y);
}
void Display(Coor2D *p1, Coor2D *p2)
{


    addcoor2d(p1, p2);
    cout << endl;
    subcoor2d(p1, p2);
    cout << endl;
    EuclideanCoor2D(p1, p2);
}

int main()
{

    Coor2D p1;
    Coor2D p2;
    p1 = Input();
    p2 = Input();
    Display(&p1, &p2);
    return 0;
}