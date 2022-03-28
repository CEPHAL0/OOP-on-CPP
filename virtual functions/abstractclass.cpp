#include <iostream>
#include <iomanip>

using namespace std;

class Base
{
public:
    virtual void show() = 0;
};

class Derv1 : public Base
{
public:
    void show()
    {
        cout << "Derived class 1";
    }
};

class Derv2 : public Base
{
public:
    void show()
    {
        cout << "Derived class 2";
    }
};

int main()
{
    Derv1 objD1;
    Derv2 objD2;
    Base *ptr;
    ptr = &objD1;
    ptr->show();
    cout << "\n";
    ptr = &objD2;
    ptr->show();
}