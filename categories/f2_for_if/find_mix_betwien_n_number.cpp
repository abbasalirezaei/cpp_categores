#include <iostream>

using namespace std;

int main()
{
    int n, id;
    double average, max1 = 0.0, max2;
    int id2, id1 = 0;
    cout << "Please Enter number of student: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        cout << "Please  Enter  your    id " << i + 1 << " : ";
        cin >> id;

        cout << "Please Enter your average " << i + 1 << " : ";
        cin >> average;

        if (average > max1)
        {
            id2 = id1;
            max2 = max1;
            max1 = average;
            id1 = id;
        }
        else if (average > max2)
        {
            max2 = average;
            id2 = id;
        }
    }

    cout << id1 << "  large  max    : " << max1 << endl;
    cout << id2 << "  lowest max    : " << max2 << endl;
}
// for run file   g++ 2.cpp -o App.exe -std=c++11