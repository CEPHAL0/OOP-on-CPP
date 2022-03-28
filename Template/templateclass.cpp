#include <iostream>

using namespace std;

template <class T>
class Rectangle
{
private:
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

int main()
{
    Rectangle<int> rect1(2, 3);
    cout << "The area is: " << rect1.calcArea() << endl;
    Rectangle<float> rect2(3.4, 8.7);
    cout << "The area is: " << rect2.calcArea();
}
