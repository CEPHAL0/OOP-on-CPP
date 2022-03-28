#include <iostream>
#include <iomanip>

using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle() {}
    Rectangle(int len, int brd) : length(len), breadth(brd) {}

    void setLength(int len) { length = len; }
    void setBreadth(int brd) { breadth = brd; }
    int getLength() { return length; }
    int getBreadth() { return breadth; }

    long calcArea()
    {
        return length * breadth;
    }

    Rectangle operator++()
    {
        return Rectangle(++length, ++breadth);
    }

    bool operator>(Rectangle rect)
    {
        return (calcArea() > rect.calcArea());
    }
};

int main()
{
    Rectangle rect1(5, 10);
    Rectangle rect2 = ++rect1;
    cout << rect2.getLength() << " " << rect2.getBreadth() << endl;
    if (rect1 > rect2)
    {
        cout << "Rect1 is greater than Rect2";
    }
    else
    {
        cout << "Rect2 is greater than Rect1";
    }
    return 0;
}