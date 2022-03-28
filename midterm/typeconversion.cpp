/*Using the concept of conversion from basic to user-defined and from user-defined to basic types, write a
C++ program to convert a given object of time (with hour and minute as its properties) to float value and
vice versa. For example, if an object is created as 2 hours and 30 minutes, the result should be 2.5 hours.*/

#include <iostream>
#include <iomanip>

using namespace std;

class Time
{
private:
    int hours;
    int minutes;

public:
    Time() {}
    Time(int hr, int min) : hours(hr), minutes(min) {}
    void setHours(int hr) { hours = hr; }
    void setMinutes(int min) { minutes = min; }

    int getHours() { return hours; }
    int getMinutes() { return minutes; }

    Time(float tim)
    {
        hours = int(tim);
        minutes = (tim - hours) * 60;
    }

    // You have to set 60 as float to perform float division
    operator float()
    {
        return hours + (minutes / 60.0);
    }
};

int main()
{
    Time delhi(2, 50);
    Time kathmandu;
    kathmandu = 4.23;
    float delhi_float;
    delhi_float = delhi;
    cout << "The time of Delhi in float is " << setprecision(3) << delhi_float << endl;
    cout << "The time of kathmandu in minutes and seconds is : " << kathmandu.getHours() << " hours " << kathmandu.getMinutes() << " minutes " << endl;
    return 0;
}