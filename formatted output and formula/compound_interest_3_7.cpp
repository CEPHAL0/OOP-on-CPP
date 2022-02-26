/*Write a program that calculates how much money you’ll end up with if you invest an
amount of money at a fixed interest rate, compounded yearly.Have the user furnish the initial amount,
the number of years, and the yearly interest rate in percent.Some interaction with the
program might look like this :
Enter initial amount : 3000
Enter number of years : 10
Enter interest rate(percent per year) : 5.5
At the end of 10 years, you will have 5124.43 dollars*/

/*At the end of the first year you have 3000 + (3000 * 0.055), which is 3165. At the end of
the second year you have 3165 + (3165 * 0.055), which is 3339.08. Do this as many
times as there are years. A for loop makes the calculation easy.*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float principle, rate, interest, actual_principle;
    int time, i, j;

    cout << "Enter initial amount: ";
    cin >> principle;
    cout << "Enter number of years: ";
    cin >> time;
    actual_principle = principle;
    cout << "Enter interest rate (percent per year): ";
    cin >> rate;

    for (i = 1; i <= time; i++)
    {
        interest = (principle) + ((principle) * (rate / 100));
        principle = interest;
    }

    cout << "At the end of " << time << " years you will have Rs." << principle << endl;
    return 0;
}