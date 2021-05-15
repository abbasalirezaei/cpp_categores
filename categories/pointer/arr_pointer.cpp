#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {{1, 6, 4}, {5, 2, 8}, {5, 2, 11}};

    int *ptr;
    ptr = &arr[0][0];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << *ptr << " ";
            ptr++;
        }
        cout << endl;
    }

    return 0;
}