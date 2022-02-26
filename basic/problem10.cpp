/*Write another version of the program from Exercise 7 so that, instead of finding the final
amount of your investment, you tell the program the final amount and it figures out how
many years it will take, at a fixed rate of interest compounded yearly, to reach this
amount. What sort of loop is appropriate for this problem? (Don’t worry about fractional
years; use an integer value for the year.)*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float principle, rate, interest, actual_principle, amount;
    int time, i = 0;

    cout << "Enter the principle : " << endl;
    cin >> principle;
    actual_principle = principle;
    cout << "Enter the rate in percentage: " << endl;
    cin >> rate;
    cout << "Enter the final amount: " << endl;
    cin >> amount;

    while (amount >= principle)
    {
        interest = (principle) + ((principle) * (rate / 100));
        principle = interest;
        i = i + 1;
    }
    i = time;

    cout << "It takes " << time << " years to get the amount" << endl;
    return 0;
}