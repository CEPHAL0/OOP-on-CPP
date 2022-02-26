#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int x = 5;
    int &y = x;
    cout << "y= " << y << endl;
    cout << "x= " << x << endl;
    y = y + 10;
    cout << "y= " << y << endl;
    cout << "x= " << x << endl;
}