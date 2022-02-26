#include <iostream>
#include <iomanip>

using namespace std;
void firstfunction();
void countfunction();
int var1 = 10;

int main()
{
    cout << "var1= " << var1 << endl;
    firstfunction();
    countfunction();
}

void firstfunction()
{
    int var1;
    cout << "var1= " << var1 << endl;
    cout << "global variable= " << ::var1 << endl;
}

void countfunction()
{
    static int count = 0;
    count++;
    cout << "count= " << count << endl;
}