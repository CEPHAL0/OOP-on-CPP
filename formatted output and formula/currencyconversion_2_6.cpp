/*On a certain day the British pound was equivalent to $1.487 U.S.,
the French franc was $0.172, the German deutschemark was $0.584,
and the Japanese yen was $0.00955.
Write a program that allows the user to enter an amount in dollars,
and then displays this value converted to these four other monetary units.*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float british_pound, french_franc, german_deutschemark, japanese_yen;
    float us_dollar;

    cout << "Enter the amount in dollars: ";
    cin >> us_dollar;
    british_pound = us_dollar * (1 / 1.487);
    french_franc = us_dollar * (1 / 0.172);
    japanese_yen = us_dollar * (1 / 0.00955);
    german_deutschemark = us_dollar * (1 / 0.584);

    cout << us_dollar << " $ : " << british_pound << " British Pound" << endl;
    cout << us_dollar << " $ : " << french_franc << " French franc" << endl;
    cout << us_dollar << " $ : " << german_deutschemark << " German deutschemark" << endl;
    cout << us_dollar << " $ : " << japanese_yen << " Japanese Yen" << endl;
}