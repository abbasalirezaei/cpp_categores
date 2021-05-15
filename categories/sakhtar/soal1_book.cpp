#include <iostream>
using namespace std;

struct Book
{
    int isbn;
    string fname;
    double price;
};

void input(Book book[], int n)

{

    for (int i = 0; i < n; i++)
    {
        cout << "please enter isbn , name , price of book: \n";
        cin >> book[i].isbn >> book[i].fname >> book[i].price;
        cin.ignore();
    }
}

void sort_by_price(Book *p, int n)
{
    Book temp1;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (p[j].price > p[j + 1].price)
            {
                temp1 = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp1;
            }
        }
    }

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << p[i].isbn << " " << p[i].fname << " " << p[i].price << endl;
    }
}
int delete_book(Book *p, int n)
{

    int x;
    cout << "enter your choosing isbn for del that ";
    cin >> x;
    int i;
    for (i = 0; i <= n; i++)
    {
        if (p[i].isbn == x)
        {
            break;
        }
    }
    // If x found in array
    if (i < n)
    {
        // reduce size of array and move all
        // elements on space ahead
        n = n - 1;
        for (int j = i; j < n; j++)
        {
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << p[i].isbn << " " << p[i].fname << " " << p[i].price << endl;
    }

    return n;
}

void sort_by_name(Book *p, int n)
{
    Book temp1;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (p[j].fname > p[j + 1].fname)
            {
                temp1 = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp1;
            }
        }
    }

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << p[i].isbn << " " << p[i].fname << " " << p[i].price << endl;
    }
}
int main()
{

    int n;
    cin >> n;

    Book book[n];
    input(book, n);

    cout << ">>>>>>>>  sort by price  <<<<<<<<";
    cout << endl;
    sort_by_price(book, n);
    cout << endl;
    cout << ">>>>>>>>  sort by name  <<<<<<<<";
    cout << endl;
    sort_by_name(book, n);
    cout << ">>>>>>>>  delete   <<<<<<<<";
    cout << endl;
    delete_book(book, n);

    cout << endl;
    //sort with price

    return 0;
}