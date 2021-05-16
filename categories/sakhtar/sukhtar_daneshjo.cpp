#include <iostream>
using namespace std;
struct date_of_berth
{
    int saal;
    int mah;
    int rooz;
};
struct Studend
{
    string id;
    string name;
    double nomre;
    date_of_berth object;
};

int main()
{
    int n;
    cin >> n;
    Studend arr[n];
    Studend temp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].id >> arr[i].name >> arr[i].nomre >>
            arr[i].object.saal >> arr[i].object.mah >> arr[i].object.rooz;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j + 1].nomre > arr[j].nomre)
            {

                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int m = n - 1;
    for (int i = 0; i < (n - m); i++)
    {
        cout << arr[i].id << " " << arr[i].name << " " << arr[i].nomre << " ";

        if (arr[i].object.saal < 10)
        {
            cout << 0 << 0 << 0 << arr[i].object.saal << " ";
        }
        else if (arr[i].object.saal < 100 && arr[i].object.saal >= 10)
        {
            cout << 0 << 0 << arr[i].object.saal << " ";
        }
        else if (arr[i].object.saal < 1000 && arr[i].object.saal >= 100)
        {
            cout << 0 << arr[i].object.saal << " ";
        }
        else
        {
            cout << arr[i].object.saal << " ";
        }

        if (arr[i].object.mah >= 1 && arr[i].object.mah < 10)
        {
            cout << 0 << arr[i].object.mah << " ";
        }

        else
        {
            cout << arr[i].object.mah << " ";
        }

        if (arr[i].object.rooz >= 1 && arr[i].object.rooz < 10)
        {
            cout << 0 << arr[i].object.rooz << endl;
        }
        else
        {
            cout << arr[i].object.rooz << endl;
        }
    }

    return 0;
}