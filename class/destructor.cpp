/*Constructors are used to initialize classes*/

#include <iostream>
#include <iomanip>
// #include "Rectangle.h"
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle() : length(5), breadth(5) {}

    Rectangle(int len, int brd) : length(len), breadth(brd) {}

    ~Rectangle()
    {
        cout << this->length << endl;
        cout << "The object is being destroyed...." << endl
             << endl;
    }

    void setLength(int len) { length = len; }
    void setBreadth(int brd) { breadth = brd; }

    int getLength() { return length; }
    int getBreadth() { return breadth; }

    long calcArea()
    {
        return length * breadth;
    }
};

int main()
{
    int len, brd;
    Rectangle rect1;

    cout << "Enter the length of rectangle2: ";
    cin >> len;
    cout << "Enter the breadth of rectangle2: ";
    cin >> brd;
    Rectangle rect2(len, brd);

    Rectangle rect3 = rect2; // Default copy constructor

    cout << "The length of rectangle1 is: " << rect1.getLength() << endl;
    cout << "The breadth of rectangle2 is: " << rect1.getBreadth() << endl;
    cout << "The area of rectangle1 is: " << rect1.calcArea() << endl;

    cout << "\n";

    cout << "The length of rectangle1 is: " << rect2.getLength() << endl;
    cout << "The breadth of rectangle2 is: " << rect2.getBreadth() << endl;
    cout << "The area of rectangle1 is: " << rect2.calcArea() << endl;
    cout << "\n";
}