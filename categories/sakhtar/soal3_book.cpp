#include <iostream>
using namespace std;
#define MAX 5
struct bands
{
    int no;
    int full;
    string name;
};
bands band[MAX];

int menu()
{
    int choose = 0;
    cout << "\n 1. List number of free band";
    cout << "\n 2. List free band number";
    cout << "\n 3. List full band numbers";
    cout << "\n 4. full band";
    cout << "\n 5. free band";
    cout << "\n 6. Exit";
    cout << "select a number beatwin 1 to 6 : ";
    cin >> choose;
    return choose;
}

void list1()
{

    int i, count = 0;
    for (int i = 0; i < MAX; i++)
    {
        if (band[i].full == 0)
        {
            count++;
        }
    }

    cout << "\n number of free band is " << count;
}
void list2()
{

    int i;
    for (int i = 0; i < MAX; i++)
    {
        if (band[i].full == 0)
        {
            cout << band[i].no << " ";
        }
    }

    cout << "\n number of free band is " << count;
}
void list3()
{

    int i;
    for (int i = 0; i < MAX; i++)
    {
        if (band[i].full)
        {
            cout << "band " << band[i].no
                 << " by full " << band[i].name << endl;
        }
    }
}
void full()
{
    int num;
    cout << "Enter band no (1..20):" cin >> num;
    if (band[num - 1].full)
    {
        cout << "Band is " << num << " full \n";
        return;
    }
    else
    {
        band[num - 1].full = 1;
        cout << "enter band full by : ";
        cin >> band[num - 1].name;
    }
}
int main()
{
    int i;
    for (i = 0; i < MAX; i++)
    {
        band[i].no = i + 1;
    }
    while (1)
    {
        switch (menu())
        {
        case 1:
            list1;
            break;
        case 2:
            list2;
            break;
        case 3:
            list3;
            break;

        default:
            break;
        }
    }

    return 0;
}