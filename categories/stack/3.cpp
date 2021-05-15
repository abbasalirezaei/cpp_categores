#include <iostream>

using namespace std;
const int Max = 10;
void Push(int S[], int &T)
{
    if (T < Max - 1) //Check for Stack not Full
    {
        cout << "Data:";
        cin >> S[++T];
    }
    else
        cout << "Stack is Full!" << endl;
}
void Pop(int S[], int &T)
{
    if (T != -1) //Check for Stack not Empty
    {
        cout << S[T--] << " Deleted!" << endl;
    }
    else
        cout << "Stack is Empty!" << endl;
}
void StackDisp(int S[], int T)
{
    for (int I = T; I >= 0; I--)
        cout << S[I] << endl;
}
int main()
{
    //Initialisation Steps
    int Stack[Max], Top = -1;
    char Ch;
    do
    {
        cout << "P:Push/O:Pop/S:Show/Q:Quit ";
        cin >> Ch;
        switch (Ch)
        {
        case 'P':
            Push(Stack, Top);
            break;
        case 'O':
            Pop(Stack, Top);
            break;
        case 'S':
            StackDisp(Stack, Top);
            break;
        }
    } while (Ch != 'Q');
    return 0;
}
// g++ 3.cpp -o App.exe