#include <iostream>
#include <iomanip>

using namespace std;

class Min
{
private:
    int min;

public:
    Min() {}
    Min(int minute) : min(minute) {}

    void display()
    {
        cout << min;
    }
};

class Hour
{
private:
    int hours;
    int mins;

public:
    Hour() {}
    Hour(int hr, int mn) : hours(hr), mins(mn) {}
    operator Min()
    {
        return Min(hours * 60 + mins);
    }
};

int main()
{
    Hour hour1(2, 30);
    Min min1;
    min1 = hour1;
    min1.display();
    return 0;
}
