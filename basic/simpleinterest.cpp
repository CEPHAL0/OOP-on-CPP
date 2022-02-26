#include <iostream>
using namespace std;
int main()
{
    float Principle, Interest, Rate;

    int Time;

    cout << "Enter the Principle: ";
    cin >> Principle;

    cout << "Enter the Rate: ";
    cin >> Rate;

    cout << "Enter the Time in Year: ";
    cin >> Time;
    
    Interest = (Principle * Time * Rate) / 100;
    cout << "The Simple Interest is " << Interest << endl;
    return 0;
}