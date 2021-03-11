
#include <iostream>

using namespace std;

int sum(int num1, int num2)
{
    return num1 + num2;
}

int sub(int num1, int num2)
{
    return num1 - num2;
}

int mul(int num1, int num2)
{
    return num1 * num2;
}

int main()
{
    int (*fun[3])(int, int) = {sum, sub, mul};
    // cout << fun[1](200, 50);


    for (int i = 0; i < 3; i++)
    {
        cout << fun[i](200, 50)<<endl;
    }

    return 0;
}