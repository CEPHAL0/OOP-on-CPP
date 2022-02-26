/*
Program: To overload operators in class
Author: Sharad Sharma
Date: 2022/02/15
*/

#include <iostream>

using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int len, int brd) : length(len), breadth(brd) {}

    void setLength(int len) { len = length; }
    void setBreadth(int brd) { brd = breadth; }

    int getLength() { return length; }
    int getBreadth() { return breadth; }

    long calcArea() { return length * breadth; }

    Rectangle operator++()
    {
        return Rectangle(++length, ++breadth);
    }

    bool operator<(Rectangle rect)
    {
        return calcArea() < rect.calcArea();
    }
};

int main()
{
    Rectangle rect3(40, 50);
    Rectangle rect4(5, 10);
    Rectangle rect1(20, 40);

    // Incrementing rectangle 1
    Rectangle rect2 = ++rect1;
    cout << "The length and breadth of rectangle 1 is: " << rect1.getLength() << " " << rect1.getBreadth() << endl;
    cout << "The length and breadth of rectangle 2 is: " << rect2.getLength() << " " << rect2.getBreadth() << endl;

    // Comparing rectangle 1 and rectangle 3
    cout << "Comparing rect1 and rect3" << endl;
    if (rect1 < rect4)
    {
        cout << "Rect 1 is smaller than Rect2.";
    }
    else
    {
        cout << "Rect 2 is smaller than Rect1.";
    }

    // Comparing rectangle 1 and rectangle 3
    cout << "Comparing rect1 and rect3" << endl;
    if (rect1 < rect3)
    {
        cout << "Rect 1 is smaller than Rect3.";
    }
    else
    {
        cout << "Rect 3 is smaller then Rect3.";
    }
    return 0;
}