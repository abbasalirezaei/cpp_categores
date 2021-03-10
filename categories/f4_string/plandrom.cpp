#include <iostream>
using namespace std;

int is_plandrom(char a[])
{

    int l = 0;
    int flag = 1;
    for (int i = 0; a[i] != '\0'; i++)
    {
        l++;
    }
    for (int i = 0; i < l / 2; i++)
    {
        if (a[i] != a[l - i - 1])
        {
            flag = 0;
        }
    }
    return flag;
}
int main()
{

    char str1[100];
    cout << "enter str 1" << endl;
    gets(str1);
    int flag = is_plandrom(str1);
    if (flag==1)
    {
        cout<<"yes";
    }else
    {
        cout<<"NO";
    }
    
    
    return 0;
}

// for run file   g++ plandrom.cpp -o App.exe -std=c++11