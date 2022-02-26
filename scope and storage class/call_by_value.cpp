#include <iostream>
#include <iomanip>

using namespace std;

int sum(int, int);

int main()
{
    int x, y;
    cout << "Enter the value of x and y ";
    cin >> x;
    cin >> y;
    cout << sum(x, y);
}

int sum(int n1, int n2)
{
    return n1 + n2;
}