===========================================================================================================================================
//This is a program to calculate the quotient and remainder    
===========================================================================================================================================

#include <iostream>
using namespace std;

int main()
{    
    int Divisor, Dividend, Quotient, Remainder;

    cout << "Enter the value of dividend: ";
    cin >> Dividend;

    cout << "Enter the value of divisor: ";
    cin >> Divisor;

    Quotient = Dividend / Divisor;
    Remainder = Dividend % Divisor;

    cout << "Quotient of the above values is = " << Quotient << endl;
    cout << "Remainder of the above values is = " << Remainder;

    return 0;
}
