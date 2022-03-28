#include <iostream>
using namespace std;

template <class T>
void swapbypointer(T *var1, T *var2)
{
    T temp;
    temp = *var1;
    *var1 = *var2;
    *var2 = temp;
}

template <class T>
void swapbyreferencevariable(T &var1, T &var2)
{
    T temp;
    temp = var1;
    var1 = var2;
    var2 = temp;
}

int main()
{
    int var1 = 3, var2 = 4;
    int var3 = 5, var4 = 10;
    cout << "The values before swapping are: " << endl;
    cout << "var1= " << var1 << endl;
    cout << "var2= " << var2 << endl;

    swapbypointer(&var1, &var2);
    cout << "\nThe swapped values are by pointer are: " << endl;
    cout << "var1= " << var1 << endl;
    cout << "var2= " << var2 << endl;

    swapbyreferencevariable(var3, var4);
    cout << "\nThe swapped values by reference variables are: "
         << endl;
    cout << "var3= " << var3 << endl;
    cout << "var4= " << var4;
}