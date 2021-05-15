#include <iostream>
using namespace std;

class book
{

    string author_name;
    string name_of_book;
    string status;

public:
    book(string a, string t, string s)
    {
        author_name = a;
        name_of_book = t;
        status = s;
    };
    ~book();
    void display();
};
book::~book()
{
    cout << "end of program...";
}

void book::display()
{
    cout << endl
         << name_of_book << " by " << author_name;
    if (status == "in")
    {
        cout << "  in";
    }
    else
    {
        cout << "  out";
    }
}

int main()
{
    book b1("ali", "riazi", "in");
    book b2("abbas", "bishoori", "out");
    b1.display();
    b2.display();
    cout << endl;
    return 0;
}
