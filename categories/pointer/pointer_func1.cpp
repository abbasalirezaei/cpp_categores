#include <iostream>
using namespace std;

// function declaration:

double getAverage(int *arr, int size)
{
    int i, sum = 0;
    double avg;

    for (i = 0; i < size; ++i)
    {
        sum += arr[i];
    }
    avg = double(sum) / size;

    return avg;
}

int main()
{
    // an int array with 5 elements.
    int n;
    cout << "enter n for number of arr: \n";

    cin >> n;

    int balance[n];
    for (int i = 0; i < n; i++)
    {
        cin >> balance[i];
    }

    double avg;

    // pass pointer to the array as an argument.
    avg = getAverage(balance, 5);

    // output the returned value
    cout << "Average value is: " << avg << endl;

    return 0;
}
