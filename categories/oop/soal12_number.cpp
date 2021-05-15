#include <iostream>
using namespace std;
class Number
{
private:
    static int num;

public:
    Number();
    ~Number();
    static int getNum()
    {
        return num;
    };
};

Number::Number()
{
    num = 0;
    num++;
}

Number::~Number()
{
    num--;
}

int main()
{
    Number t;
    t.getNum();

    return 0;
}