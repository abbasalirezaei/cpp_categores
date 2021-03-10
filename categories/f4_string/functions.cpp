#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    char a[100], b[100];
    cout << "enter str 1" << endl;
    gets(a);
    cout << "enter str 2" << endl;
    gets(b);
    // int a= strchr(a,'b');
    char *p = strchr(a, 'b');  //find  first b
    char *d = strrchr(a, 'b'); // find  end   b
    char *search = strstr(a, "ali");
    // cout << "str to lower  = " << strupr(a) << endl;
    cout << "find first b    :" << p - a << endl;
    cout << "find  end   b   :" << d - a << endl;
    cout << "find ali in str : " << search - a << endl;

    //for compair

    char compair = strcmp(a, b);
    if (compair > 0)
    {
        cout << "str1 > str2 " << endl;
    }
    else if (compair < 0)
    {
        cout << "str1 < str2 " << endl;
    }
    else if (compair == 0)
    {
        cout << "str1 = str2 " << endl;
    }
    //for copy we use strcpy
    // strcpy(a, b);
    // strncpy(a,b,2);

    strcat(a, b);
    cout << "a     :" << a << endl;
    cout << "b     :" << b << endl;

    return 0;
}

// for run file   g++ functions.cpp -o App.exe