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

    student ali;
    student abbas;
    ali.fname = "alireza";
    ali.address = "porzi";
    ali.date_of_birth = 20;
    cout << ali.fname << endl;
    cout << ali.address << endl;
    cout << ali.date_of_birth << endl;

    return 0;
}