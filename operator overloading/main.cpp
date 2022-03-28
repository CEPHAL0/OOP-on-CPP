#include <iostream>
#include <iomanip>

using namespace std;

class Point
{
private:
    int x;
    int y;

public:
    Point() {}
    Point(int x_coord, int y_coord) : x(x_coord), y(y_coord) {}
    void setX(int x_coord) { x = x_coord; }
    void setY(int y_coord) { y = y_coord; }
    int getX() { return x; }
    int getY() { return y; }
    void printXY() { cout << "(" << x << "," << y << ")" << endl; }
    const Point operator+(Point p2)
    {
        Point temp;
        temp.setX(getX() + p2.getX());
        temp.setY(getY() + p2.getY());
        return temp;
    }
};

int main()
{
    Point p1(1, 2);
    Point p2(4, 5);
    Point p3 = p1 + p2;
    // Point p5 = p1 + p2 + p3;
    p3.printXY();
}