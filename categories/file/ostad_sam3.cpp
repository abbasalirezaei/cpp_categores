#include <iostream>

#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
    string filename, name;
    int noumber_studend = 0, ave = 0;
    // cout << "enter the name of file that you want...\n";
    // getline(cin, filename);
    ofstream f1("student.txt");
    for (;;)
    {
        cout << "Please enter name , number_stu and ave (0for quit): ";
        cin >> name;

        if (name == "0")
        {
            break;
        }

        f1 << name << ' ';

        cin >> noumber_studend;
        f1 << noumber_studend << ' ';

        cin >> ave;
        f1 << ave << endl;
    }
    f1.close();
    ifstream f2("student.txt");
    string name1;
    int noumber_studend1 = 0, ave1 = 0;
    cout << "Name"
         << "       number_student "
         << "         avarage";
    cout << "\n--------------------------------------------\n";
    while (f2 >> name1)
    {
        f2 >> noumber_studend1;
        f2 >> ave1;
        cout << name1 << setw(8) << noumber_studend1 << setw(5) << ave1 << endl;
        ;
    }
    f2.close();
}