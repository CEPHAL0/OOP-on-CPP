#include <iostream>
using namespace std;
#define MAX 100

template <class T>
void multiplyMatrix(T arr1[][MAX], int a, int b, T arr2[][MAX], int c, int d)
{
    if (b == c)
    {
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < d; j++)
            {
                for (int k = 0; k < c; k++)
                {
                    T sum += (arr1[i][k] * arr2[k][j]);
                }
                T product[i][j] = sum;
                sum = 0;
            }
        }
    }
    else
    {
        cout << "The matrix cannot be multiplied";
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < d; j++)
        {
            cout << product[i][j] << "\n";
        }
        cout << "\n";
    }
}

int main()
{
    int a[2][2] = {1, 2, 3, 4};
    int b[2][1] = {2, 1};
    cout << multiplyMatrix(a, 2, 2, b, 2, 1);
}
