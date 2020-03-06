===========================================================================================================================================
//This is a program for Addition of Two Numbers
===========================================================================================================================================
#include <iostream>
using namespace std;

int main()
{
    int First_number, Second_number, Sum_of_two_numbers;
    
    cout << "Enter two integers: ";
    cin >>First_number>>Second_number ;
    Sum_of_two_numbers = First_number + Second_number;

    cout << First_number << " + " <<  Second_number << " = " << Sum_of_two_numbers;     
    return 0;
}
