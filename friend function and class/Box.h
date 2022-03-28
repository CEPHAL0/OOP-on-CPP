#include <iostream>
using namespace std;

class Paper;
class Box
{
    friend int printData(Box, Paper);

private:
    int dataBox;

public:
    Box() : dataBox(5) {}
};