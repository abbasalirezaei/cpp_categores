#include <iostream>
#include <conio.h>
using namespace std;

class day_of_year
{
private:
    int month;
    int day;

public:
    friend int equal(day_of_year date1, day_of_year date2);
    day_of_year(int m, int d)
    {
        month = m;
        day = d;
    };
    day_of_year()
    {
        month = 1;
        day = 1;
    };
    void input()
    {
        cout << "enter the month and as a number: ";
        cin >> month;

        cout << "enter the day and as a number: ";
        cin >> day;
    };
    void output()
    {
        cout << "month = " << month << " , day = " << day << endl;
    };
};
int equal(day_of_year data1, day_of_year data2)
{
    return (data1.day == data2.day && data1.month == data2.month);
}
int main()
{
    day_of_year today, birthday(9, 7);

    cout << "enter todays date...\n";
    today.input();
    today.output();

    cout << "abbas birth_day is: \n";
    birthday.output();

    if (equal(today, birthday))
    {
        cout<<"happy birthday ali!";
    }else{
         cout<<"happy unbirthday ali!";
    }
    return 0;
}
