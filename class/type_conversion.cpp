#include <iostream>
#include <iomanip>

using namespace std;

class Distance
{
private:
    int feet;
    int inches;

public:
    Distance() {}
    Distance(int f, int i) : feet(f), inches(i) {}

    void display();
    Distance(float);
    operator float();
};

void Distance::display()
{
    cout << feet << " ft " << inches << " inch" << endl;
}

// Overloading constructor
Distance::Distance(float dist)
{
    feet = int(dist);
    inches = dist - feet;
}

// To return feet and inches
Distance::operator float()
{
    return feet + (inches / 12.0);
}

int main()
{
    Distance d1(10, 5);
    Distance d2;
    d2 = 10.6F;
    float f;
    f = d1;
    cout << "The distance d2 is: " << setprecision(3) << f << endl;
    return 0;
}