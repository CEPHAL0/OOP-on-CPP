#include <iostream>
#include <iomanip>

using namespace std;

class Rectangle
{
protected:
    int length;
    int breadth;

public:
    void setLength(int len) { length = len; }
    void setBreadth(int brd) { breadth = brd; }

    int getLength() { return length; }
    int getBreadth() { return breadth; }

    long calcArea()
    {
        return length * breadth;
    }
};

class AdvRectangle : public Rectangle
{
protected:
    int borderWidth;
    string borderColor;

public:
    long calcPerimeter() { return 2 * (length + breadth); }
    void setBorderWidth(int bdr) { borderWidth = bdr; }
};

int main()
{
    AdvRectangle rect;
    rect.setLength(2);
    rect.setBreadth(5);
    rect.setBorderWidth(4);
    rect.calcArea();
    rect.calcPerimeter();
    cout << "The area is: " << rect.calcArea() << endl;
    cout << "The perimeter is: " << rect.calcPerimeter() << endl;
}