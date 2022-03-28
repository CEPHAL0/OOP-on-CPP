#include <iostream>

using namespace std;

template <class T>
class Rectangle
{
protected:
    T length;
    T breadth;

public:
    Rectangle() {}
    Rectangle(T len, T brd) : length(len), breadth(brd) {}
    T getLength() { return length; }
    T getBreadth() { return breadth; }
    void setLength(T len) { length = len; }
    void setBreadth(T brd) { breadth = brd; }
    T calcArea()
    {
        return length * breadth;
    }
};

template <class T>
class AdvRectangle : public Rectangle<T>
{
private:
    string bordercolor;
    T borderwidth;

public:
    AdvRectangle() {}
    AdvRectangle(T len, T brd, string brdc, T bordw) : Rectangle(len, brd), bordercolor(brdc), borderwidth(bordw) {}
    T calcPerimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    Rectangle<int> rect1(3, 4);
    AdvRectangle<int> advrect1(2, 4, "red", 5);
    cout << "The perimtere is: " << advrect1.calcPerimeter();
}