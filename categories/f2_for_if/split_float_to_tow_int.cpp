#include <iostream>
#include <string>
using namespace std;

int main()
{

    double n;
    cout << "enter n: \n";
    cin >> n;
    string convert = to_string(n);
    int len = int(convert.size());
    for (int i = 0; i < len; i++)
    {
        if (convert[i] == '.')
        {
            for (int j = 0; j < i; j++)
            {
                cout << convert[j];
            }
        }
    }

    cout << endl;
    for (int i = 0; i < len; i++)
    {
        if (convert[i] == '.')
        {
            for (int j = i + 1; j < len; j++)
            {
                
                if (convert[j] != '0')
                {
                   cout << convert[j];
                }
            }
        }
    }

    cout << endl;
    // cout << convert;
    return 0;
    // }

    // to_string example
    // #include <iostream> // cout
    // #include <string>   // string, to_string
    // using namespace std;
    // int main()
    // {
    //     string pi = "pi is " + to_string(3.1415926);
    //     string perfect = to_string(1 + 2 + 4 + 7 + 14) + " is a perfect number";
    //     cout << pi << '\n';
    //     cout << perfect << '\n';
    //     return 0;
}