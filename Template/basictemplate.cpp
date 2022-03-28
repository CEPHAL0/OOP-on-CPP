#include <iostream>
using namespace std;

template <class T>
T maxNumber(T var1, T var2)
{
    return var1 > var2 ? var1 : var2;
}

int main()
{
    int ivar1 = 3, ivar2 = 4;
    cout << "The biggest integer number is: " << maxNumber(ivar1, ivar2) << endl;
    float fvar1 = 6.4, fvar2 = 7.8, fvar3 = 1.2;
    cout << "The biggest float number is: " << maxNumber(maxNumber(fvar1, fvar2), fvar3);
}
