#include <iostream>
using namespace std;
class player
{
public:
    string name;
    int score;
};
class team
{

public:
    player a[5];
    string name_team;
    void Enter_information();
    void show_information();
    void total_Score(int *n)
    {
        for (int i = 0; i < 5; i++)
        {
            *n += a[i].score;
        }
    }
    int  max( string *b)
    {
 
    }
};
void team::Enter_information()
{
    cin >> name_team;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i].name;
        cin >> a[i].score;
    }
}
void team::show_information()
{

    cout << name_team << endl;
}
int main()
{
    int total_score1 = 0, max1 = 0;
    int total_score2 = 0, max2 = 0;
    string max_name1;
    string max_name2;

    team obj1;
    obj1.Enter_information();
    obj1.max_Score1(&max1, &max_name1);
    obj1.total_Score(&total_score1);

    team obj2;
    obj2.Enter_information();
    obj2.max_Score1(&max2, &max_name2);
    obj2.total_Score(&total_score2);

    //for show
    if (total_score1 > total_score2)
    {
        obj1.show_information();
        cout << max_name1 << " " << max1 << endl;
    }
    else
    {
        obj2.show_information();
        cout << max_name2 << " " << max2 << endl;
    }
    return 0;
}