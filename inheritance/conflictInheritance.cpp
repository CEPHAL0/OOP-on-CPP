#include <iostream>

using namespace std;

class A
{
private:
    int testA;

public:
    void retn()
    {
        cout << "The object of A is called";
    }
};

class B
{
private:
    int testB;

public:
    void retn()
    {
        cout << "The object of B is called";
    }
};

class D : public A, public B
{
};

int main()
{
    D objD;
    objD.B::retn();
    return 0;
}