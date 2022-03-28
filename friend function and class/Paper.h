#include <iostream>
#include "box.h"

class Paper
{
    friend int printData(Box, Paper);

private:
    int data;

public:
    Paper() : data(5) {}
};