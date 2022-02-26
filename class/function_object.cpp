#include "Rectangle.h"
#include <iostream>

using namespace std;

// Passing object as data type
Rectangle readValue()
{
    int len, brd;
    Rectangle rect;

    cout << "Enter the length of the rectangle: ";
    cin >> len;

    cout << "Enter the breadth of the rectangle: ";
    cin >> brd;

    rect.setLength(len);
    rect.setBreadth(brd);

    return rect;
}

void printRectangleDetail(Rectangle rect)
{
    cout << "The length of rectangle is: " << rect.getLength() << endl;
    cout << "The length of rectangle is: " << rect.getBreadth() << endl;
    cout << "The area of rectangle is: " << rect.calcArea() << endl;
}

int main()
{
    Rectangle rect;
    readValue();
    printRectangleDetail(rect);
    return 0;
}