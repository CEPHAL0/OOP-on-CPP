#include <iostream>
#include <iomanip>
using namespace std;

void swap(int, int);

int main()
{
    int n1, n2;
    cin >> n1;
    cin >> n2;
    swap(n1, n2);
    cout << "n1= " << n1 << " n2= " << n2;
}

void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}