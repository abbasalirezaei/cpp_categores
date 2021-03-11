#include <iostream>
using namespace std;

struct student
{
    string fname;
    string address;
    int date_of_birth;
};

int main()
{

    int size = 2;
    student stu[size];
    for (int i = 0; i < size; i++)
    {
        cout << "student " << i + 1 << " " << endl;
        cout << "enter your fname : ";
        cin >> stu[i].fname;
        cin.ignore();
        cout << "enter your address : ";
        cin >> stu[i].address;
        cin.ignore();
        cout << "enter your date_of_birth : ";
        cin >> stu[i].date_of_birth;
        cout << "========================================" << endl;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "student " << i + 1 << " " << endl;
        cout << stu[i].fname << endl;

        cout << stu[i].address << endl;

        cout << stu[i].date_of_birth << endl;
        cout << "========================================" << endl;
    }

    return 0;
}