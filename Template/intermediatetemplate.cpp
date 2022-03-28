#include <iostream>

using namespace std;

template <class T, class T2>
T findNumber(T2 arr[], T2 value, T n)
{
    for (T i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int array[5] = {1, 2, 4, 5, 6};
    cout << "The index of 4 is: " << findNumber(array, 4, 5l);
}
