/*
By default, output is right-justified in its field. You can left-justify text output using the
manipulator setiosflags(ios::left). (For now, don’t worry about what this new notation
means.) Use this manipulator, along with setw(), to help generate the following output:
Last name   First name  Street address      Town            State
-------------------------------------------------------------------
Jones       Bernard     109 Pine Lane       Littletown      MI
O’Brian     Coleen      42 E. 99th Ave.     Bigcity         NY
Wong        Harry       121-A Alabama St.   Lakeville       IL
*/

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    // Printing the first row
    cout << setiosflags(ios::left) << setw(20)
         << "Last name" << setiosflags(ios::left) << setw(20)
         << "First name" << setiosflags(ios::left) << setw(20)
         << "Street address" << setiosflags(ios::left) << setw(20)
         << "Town" << setiosflags(ios::left) << setw(20)
         << "State" << setiosflags(ios::left) << setw(20)
         << endl;

    // Printing the line seperator
    cout << "---------------------------------------------------------------------------------------" << endl;

    // Printing the second row
    cout << setiosflags(ios::left) << setw(20)
         << "Jones" << setiosflags(ios::left) << setw(20)
         << "Bernard" << setiosflags(ios::left) << setw(20)
         << "109 Pine Lane" << setiosflags(ios::left) << setw(20)
         << "Littletown" << setiosflags(ios::left) << setw(20)
         << "MI" << setiosflags(ios::left) << setw(20)
         << endl;

    // Printing the third row
    cout << setiosflags(ios::left) << setw(20)
         << "O'Brian" << setiosflags(ios::left) << setw(20)
         << "Coleen" << setiosflags(ios::left) << setw(20)
         << "42 E. 99th Ave." << setiosflags(ios::left) << setw(20)
         << "Bigcity" << setiosflags(ios::left) << setw(20)
         << "NY" << setiosflags(ios::left) << setw(20)
         << endl;

    // Printing the fourth row
    cout << setiosflags(ios::left) << setw(20)
         << "Wong" << setiosflags(ios::left) << setw(20)
         << "Harry" << setiosflags(ios::left) << setw(20)
         << "121-A Alabama St." << setiosflags(ios::left) << setw(20)
         << "Lakeville" << setiosflags(ios::left) << setw(20)
         << "IL" << setiosflags(ios::left) << setw(20)
         << endl;

    return 0;
}