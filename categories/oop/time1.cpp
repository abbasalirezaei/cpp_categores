#include <iostream>
using namespace std;

class time
{
    int hour;
    int minute;
    int second;

public:
    time()
    {
        hour = 0;
        minute = 0;
        second = 0;
    };
    void set_info(int, int, int);
    ~time();
    void display();
};
time::~time()
{
    cout << "end of program...";
}
void time::set_info(int h, int m, int s)
{
    hour = (h >= 0 && h < 24) ? h : 0;

    minute = (m >= 0 && m < 60) ? m : 0;

    second = (s >= 0 && h < 60) ? s : 0;
}
void time::display()
{
    
}

int main()
{
    time b1;
    int hour, minute, seccend;
    cout << "enter the hour and minute and seccend";
    cin >> hour >> minute >> seccend;
    b1.set_info(hour, minute, seccend);
    b1.display();

    cout << endl;
    return 0;
}
