#include <iostream>
#include <cstring>
using namespace std;
int n = 100, top = -1;

char stack[100];
char push(char element)
{
    top++;
    stack[top] = element;
}
char pop()
{
    return stack[top--];
}
int main()
{
    int i;
    bool cheek = true;
    char s[100];
    cin.getline(s, 100);
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] == '(')
        {
            push(s[i]);
        }
        else if (s[i] == ')')
        {
            s[i] = pop();
        }
    }
    if (top == -1)
    {
        cout << "T";
    }
    else
    {
        cout << "F";
    }

}

// g++ 1.cpp -o App.exe