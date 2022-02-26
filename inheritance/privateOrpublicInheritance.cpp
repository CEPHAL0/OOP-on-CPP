#include <iostream>
#include <iomanip>

using namespace std;

class Rectangle
{
protected:
    int length;
    int breadth;

public:
    Rectangle() {}
    Rectangle(int len, int brd) : length(len), breadth(brd) {}

    long calcArea()
    {
        return length * breadth;
    }
};

class AdvRectangle : public Rectangle
{
private:
    int borderwidth;
    string bordercolor;

public:
    AdvRectangle() {}
    AdvRectangle(int len, int brd, int bw, string bc) : Rectangle(len, brd), borderwidth(bw), bordercolor(bc) {}
    long calcArea();
};

long AdvRectangle::calcArea()
{
    if (length < 0 || breadth < 0)
    {
        return 0;
    }
    else
    {
        return length * breadth;
    }
    return 0;
}