/*Write a program to determine the sum of the harmonic series (1 + 1/2 + 1/3 + 1/4 + ………+ 1/n) for a given value
of n. (hint: make use of function which returns a value)*/

#include <iostream>
#include <iomanip>

using namespace std;

float harmonic(int n)
{
    float sum = 0;
    for (float i = 1; i <= n; i++)
    {
        sum += 1 / i;
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    float sum;
    sum = harmonic(n);
    cout << "The sum is: " << sum;
}