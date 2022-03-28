#include <iostream>
#include "Shape.h"

using namespace std;

int main()
{

    shape *objshp[50];

    objshp[0] = new circle(50);
    objshp[1] = new square(3.9);

    for (int i = 0; i < 2; i++)
    {
        objshp[i]->printArea();
    }
}