#include <iostream>
using namespace std;

class NonValid
{
public:
    string datatype;
    int value;
    NonValid() {}
    NonValid(string val1, int val2) : datatype(val1), value(val2) {}
};

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle() {}
    Rectangle(int len, int brd) : length(len), breadth(brd) {}
    long calcArea()
    {
        if (length < 0)
        {
            throw NonValid("length", length);
        }
        else if (breadth < 0)
        {
            throw NonValid("breadth", breadth);
        }
        else if (length < 0 && breadth < 0)
        {
            throw NonValid("length and breadth", length);
        }
        else
        {
            return length * breadth;
        }
    }
};

int main()
{
    Rectangle rect1(20, 30);
    Rectangle rect2(-10, 20);
    Rectangle rect3(20, -40);
    Rectangle rect4(-10, -20);

    try
    {
        cout << rect1.calcArea() << endl;
        cout << rect2.calcArea() << endl;
        // Once the statement jumps to catch the statements below them dont get executeds
        cout << rect3.calcArea() << endl;
        cout << rect4.calcArea() << endl;
    }
    catch (NonValid ne)
    {
        cout << ne.datatype << endl;
        cout << ne.value << endl;
    }
    return 0;
}