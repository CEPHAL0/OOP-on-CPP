#include <iostream>
using namespace std;

template <class T>
T sumOfArray(T arr[], int n)
{
    T temp = 0;
    for (int i = 0; i < n; i++)
    {
        temp += arr[i];
    }
    return temp;
}

template <class T>
void readval(T arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value of " << i << "th element: ";
        cin >> arr[i];
        cout << endl;
    }
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    cout << "The sum of array a is: " << sumOfArray(a, 5) << endl;
    float b[10] = {2.3,
                   5.6,
                   6.7,
                   6.5,
                   7.8,
                   1.1,
                   2.2,
                   5.7,
                   7.9,
                   9.6};
    cout << "The sum of array b is: " << sumOfArray(b, 10) << endl;

    int n;
    cout << "Enter how many elements in array: ";
    cin >> n;
    float *arr = new float[n];
    readval(arr, n);
    cout << "\nThe sum of array is: " << sumOfArray(arr, n);
}