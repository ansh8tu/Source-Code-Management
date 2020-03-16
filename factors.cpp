===========================================================================================================================================
//This is a program for calculating factors of a number
===========================================================================================================================================
#include <iostream>
using namespace std;

int main()
{
    int Entered_number, i;

    cout << "Enter any positive integer: ";
    cin >> Entered_number;

    cout << "Factors of number are/is " << Entered_number << " are: " << endl;  
    for(i = 1; i <= Entered_number; ++i)
    {
        if(Entered_number % i == 0)
            cout << i << endl;
    }

    return 0;
}
