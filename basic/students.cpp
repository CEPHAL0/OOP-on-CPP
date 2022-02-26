#include <iostream>
#include <iomanip>

// Use pointer or the string for more flexibility

using namespace std;
int main()
{
    char std_name[40];
    float sub1;
    float sub2;
    float sub3;
    float percentage;

    cout << "Enter the students name: " << endl;
    cin.get(std_name, 40);

    cout << "Enter the marks of Subject 1: " << endl;
    cin >> sub1;

    cout << "Enter the marks of Subject 2: " << endl;
    cin >> sub2;

    cout << "Enter the marks of Subject 3: " << endl;
    cin >> sub3;

    percentage = ((sub1 + sub2 + sub3) / 3) * 100;

    cout << "Result" << endl;
    cout << setw(20) << std_name << endl;
    cout << "Marks of Subject 1:" << setw(5) << sub1 << endl;
    cout << "Marks of Subject 2:" << setw(5) << sub2 << endl;
    cout << "Marks of Subject 3:" << setw(5) << sub3 << endl;

    if (percentage >= 85)
    {
        cout << "The student " << std_name << " got Distinction" << endl;
    }

    else if (percentage >= 70)
    {
        cout << "The student " << std_name << setw(2) << "got First Divison" << endl;
    }

    else if (percentage >= 60)
    {
        cout << "The student " << std_name << setw(2) << "got Second Division" << endl;
    }

    else if (percentage >= 40)
    {
        cout << "The student " << std_name << setw(2) << "got Third Division" << endl;
    }

    else
    {
        cout << "The student " << std_name << setw(2) << "has failed" << endl;
    }

    return 0;
}