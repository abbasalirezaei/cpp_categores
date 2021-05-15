
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int sum = 0;
    int i = 1;
    int j = 1;
    for (i; i <= 500; i++)
    {
        for (j; j <= 500; j++)
        {
            if (j < i)
            {

                if (i % j == 0)
                    sum = sum + j;
            }
        }

        if (sum == i)

            cout << i << " ";
        j = 1; //line 66
        sum = 0;
    }

    // cout << sum;

    return 0;
}
