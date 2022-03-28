#include <iostream>

using namespace std;

template <class T>
T amin(T arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                T temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr[0];
}

int main()
{
    int a[4] = {5, 4, 6, 2};
    cout << amin(a, 4);
}