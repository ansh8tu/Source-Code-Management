========================================================================================================================================
//This is a program to convert binary to decimal number	
========================================================================================================================================
#include <iostream>
#include <cmath>

using namespace std;

int Convert_binary_to_decimal(long long);

int main()
{
    long long Number;

    cout << "Enter a binary number: ";
    cin >> Number;
 
    cout << Number << " in binary = " << Convert_binary_to_decimal(Number) << "in decimal";
    return 0;
}

int Convert_binary_to_decimal(long long Number)
{
    int Decimal_number = 0, i = 0, Remainder;
    while (Number!=0)
    {
        Remainder = n%10;
        Number /= 10;
        Decimal_number += Remainder*pow(2,i);
        ++i;
    }
    return Decimal_number;
}
