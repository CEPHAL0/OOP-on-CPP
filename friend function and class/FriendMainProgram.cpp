#include "Paper.h"

int printData(Box bx, Paper ppr)
{
    return bx.dataBox + ppr.data;
}

int main()
{
    Paper objPaper;
    Box objBox;
    cout << printData(objBox, objPaper);
}