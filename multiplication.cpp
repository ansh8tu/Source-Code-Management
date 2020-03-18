===========================================================================================================================================
//This is a program for multiplying two numbers    
===========================================================================================================================================
#include <iostream>
using namespace std;

int main()
{
    double First_number, Second_number, Product_of_two_numbers;
    cout << "Enter any two numbers that you wish to multiply: ";
    cin >> firstNumber >> secondNumber;
    Product_of_two_numbers = First_number * Second_number;  
    cout << "Product of "<<First_number<<"and "<<Second_number<<"is = " << Product_of_two_numbers;    
    return 0;
}
