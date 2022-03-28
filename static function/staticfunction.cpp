#include <iostream>
#include <iomanip>

using namespace std;

class Rectangle
{
private:
    int length;
    static int count;

public:
    Rectangle() { count++; }
    Rectangle(int len) : length(len) { count++; }
    static int getCount()
    {
        return count;
    }
};

// We have to initialize static data outside the class
int Rectangle::count = 0;

int main()
{
    Rectangle r1;
    cout << r1.getCount();
    Rectangle r3(2);
    cout << r3.getCount();
}