#include <iostream>
// #include "Rectangle.h"

using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
    static int count;

public:
    Rectangle() : length(5), breadth(10)
    {
        count++;
    }

    Rectangle(int l, int b) : length(l), breadth(b)
    {
        count++;
    }

    void setLength(int len) { length = len; }
    int getLength() { return length; }
    void setBreadth(int brd) { breadth = brd; }
    int getBreadth() { return breadth; }
    int getCount() { return count; }
    long calcArea();
};

int Rectangle::count = 0;

int main()
{
    Rectangle r1;
    Rectangle r2(10, 20);
    Rectangle r3 = r2;

    cout << "The value of count is: " << r1.getCount() << endl;
    cout << "The value of count is: " << r2.getCount() << endl;
    cout << "The value of count is: " << r3.getCount() << endl;

    return 0;
}
