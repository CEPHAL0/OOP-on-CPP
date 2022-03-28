#include <iostream>
using namespace std;

long divide(int a, int b)
{
    if (b == 0)
    {
        throw 1;
    }
    else
    {
        return a / b;
    }
}

long multiply(int var1, int var2)
{
    if (var1 == 0 || var2 == 0)
    {
        throw "Product will be zero";
    }
    else
    {
        return var1 * var2;
    }
}

int main()
{
    int var1 = 9;
    int var2 = 3;
    int var3 = 0;
    try
    {
        cout << "The division is: " << divide(var1, var2) << endl;
        cout << "The division is: " << divide(var1, var3) << endl;
    }
    catch (int val)
    {
        if (val == 1)
        {
            cout << "Cant be divided"<<endl;
        }
    }

    try
    {
        cout << "The product is: " << multiply(var1, var3);
    }
    catch (const char *valchar)
    {
        cout << valchar;
    }
}