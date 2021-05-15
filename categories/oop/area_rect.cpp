#include <iostream>
using namespace std;

class circle
{
private:
    int len;
    int width;

public:
    void read_info();
    float find_area();
    float find_state();
    void display_info();
};

void circle::read_info()
{
    cout << "Enter the len: ";
    cin >> len;
    cout << "Enter the width: ";
    cin >> width;
}
float circle::find_area()
{
    float area = 0;
    area = len * width;
    return area;
}
float circle::find_state()
{
    float state = 0;
    state = 2 * (len + width);
    return state;
}
void circle::display_info()
{
    cout << "the area: " << find_area();
    cout << endl;
    cout << "the state: " << find_state();
}
int main()
{
    circle obj1;
    obj1.read_info();
    obj1.display_info();

    return 0;
}