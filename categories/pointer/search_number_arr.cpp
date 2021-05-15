#include <iostream>
using namespace std;
int linearSearch(const int[], int, int);

int main()
{
    const int arraySize = 7;
    int a[arraySize] = {2, 6, 4, 3, 12, 10, 5};
    int searchKey;

    cout << "Enter integer search key: ";
    cin >> searchKey;

    int element = linearSearch(a, searchKey, arraySize);

    if (element != -1)
        cout << "Found value in element "
             << element << endl;
    else
        cout << "Value not found" << endl;
    return 0;
}

int linearSearch(const int array[], int key, int len)
{
    for (int j = 0; j < len; j++)

        if (array[j] == key)
            return j;

    return -1;
}