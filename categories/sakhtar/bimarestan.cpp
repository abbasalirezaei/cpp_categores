#include <iostream>
using namespace std;
struct jensiat
{
    int boy = 0;
    int girl = 0;

    double vazn;
};
struct Hospital
{

    string name;
    string jensiat;
    double vazn;
};

int main()
{
    int n;
    cin >> n;
    Hospital arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].jensiat >> arr[i].name >> arr[i].vazn;
    }
    jensiat boy;
    jensiat girl;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].jensiat == "boy")
        {
            boy.boy += 1;

            boy.vazn += arr[i].vazn;
        }
        if (arr[i].jensiat == "girl")
        {
            girl.girl += 1;

            girl.vazn += arr[i].vazn;
        }
    }

    if (boy.boy != 0)
    {
        cout << "boy " << boy.boy << " " << (boy.vazn) / (boy.boy) << endl;
    }
    if (boy.boy == 0)
    {
        cout << "boy " << 0 << " " << 0 << endl;
    }

    if (girl.girl != 0)
    {
        cout << "girl " << girl.girl << " " << (girl.vazn) / (girl.girl) << endl;
    }
    if (girl.girl == 0)
    {
        cout << "girl " << 0 << " " << 0 << endl;
    }

    return 0;
}