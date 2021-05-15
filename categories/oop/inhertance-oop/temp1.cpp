#include <iostream.h>

#include <conio.h>
using namespace std;
class sum
{

private:
    int n;

    float a[100], sum;

public:
    void output()

    {

        Sum = 0;

        Cout << "\n How many numbers ?";

        Cin >> n;

        Cout << "\n enter the element :";

        for(i = 0; i < n; i++)

        {

            Cin >> a[i];

            Sum = sum + a[i];
        }

        Average = sum / n;

        cout << "\n average =" << average;
    }
};

void main()

{
    Sum obj;

    Obj.ouput();
    getch();
}