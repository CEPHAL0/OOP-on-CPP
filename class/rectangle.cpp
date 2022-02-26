#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    Rectangle rect1, rect2;
    // int x,y
    int len, brd;

    cout << "Enter the length: ";
    cin >> len;

    cout << "Enter the breadth: ";
    cin >> brd;

    rect1.setLength(len);
    rect1.setBreadth(brd);

    cout << "The area of rectangle is: " << rect1.calcArea() << endl;
    return 0;
}