#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float num1 = 5, num2 = 3;
    float result;

    result = num1 / num2;

    cout << setprecision(1) << result << endl;
    cout << setprecision(2) << result << endl;
    cout << setprecision(3) << result << endl;
    cout << setprecision(4) << result << endl;
    cout << setprecision(5) << result << endl;
    cout << setprecision(6) << result << endl;

    return 0;
}