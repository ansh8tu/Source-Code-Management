===========================================================================================================================================
//This is a program for checking whether a number is even or odd     
===========================================================================================================================================

#include <iostream>
using namespace std;

int main()
{
    int Entered_number;

    cout << "Enter an integer: ";
    cin >> Entered_number;

    if ( Entered_number % 2 == 0)
        cout << Entered_number << " is an even number.";
    else
        cout << Entered_number << " is an odd number.";

    return 0;
}
