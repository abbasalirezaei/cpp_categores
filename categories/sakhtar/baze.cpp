#include <iostream>
using namespace std;
struct Interval
{
    int start, end;
};

int main()
{
    int n;
    cin >> n;
    Interval arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].start >> arr[i].end;
    }

    Interval temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j].start > arr[j + 1].start)
            {

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    
    for (int i = 0; i < n; i++)
    {
        cout << "[" << arr[i].start << "," << arr[i].end << "]";
    }

    return 0;
}