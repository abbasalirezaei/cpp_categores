#include <iostream>
#include <conio.h>
using namespace std;
const int idle = 0;
const int inuse = 1;
class myclass2;
//class 1
class myclass1
{
private:
    int status;

public:
    friend int idlefuncton(myclass1 a, myclass2 b);
    void set_status(int state)
    {
        status = state;
    };
};
class myclass2
{
private:
    int status;

public:
    friend int idlefuncton(myclass1 a, myclass2 b);
    void set_stats(int state)
    {
        status = state;
    };
};
int idlefuncton(myclass1 a, myclass2 b)
{

    if (b.status || a.status)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    myclass2 x;
    myclass1 y;
    x.set_stats(idle);

    y.set_status(idle);

    if (idlefuncton(y, x))
    {
        cout << "screain can be used...";
    }
    else
    {
        cout<<"can't be use ...";
    }

    return 0;
}
