#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "enter your n: \n";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter your number " << i + 1 << ": \n";
        cin >> arr[i];
    }
    int maximum, i, j;
    int m = n - 1;
    for (i = 0; i < n; i++)
    {
      
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
       
    }
    cout << "largest number is : " << maximum << " " << endl;
    return 0;
}