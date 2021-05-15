#include <iostream>
#include <conio.h>
using namespace std;
class worker
{

public:
    int age;
    char name[10];
    void get()
    {
        cout << "your name please: ";
        cin >> name;
        cout << "your age please: ";
        cin >> age;
    };

    void show()
    {
        cout << "In My name is :" << name << "In My age is :" << age;
    }
};

class manager : public worker //derived class (publicly)
{
    int now;

public:
    void get()
    {
        worker::get();
        cout << "number of workers under you: ";
        cin >> now;
        // cin >> name >> age;
    }
    // (if they were public)
    void show()
    {
        worker ::show(); //calling of base class o/p fn.
        cout << "\nin No.of workers under me are : \n"
             << now;
    }
};

main()
{
    worker W1;
    manager M1;
    M1.get();
    M1.show();
}
