#include <iostream>
using namespace std;

int main()
{
    int i, j;
    string temp;
    cout << "Enter the sentence: ";
    cin >> temp;
    for (i = 0; i < 30; i++)
    {
        if (temp[i] == " " && temp[i + 1] != " ")
        {
            j = j + 1;
        }
    }
    cout << j + 1;
    return 0;
}