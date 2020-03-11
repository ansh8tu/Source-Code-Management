===========================================================================================================================================
//This is a program for calculating sum of natural number	
===========================================================================================================================================
#include <iostream>
using namespace std;

int main()
{
    int Number, Sum = 0;

    cout << "Enter a positive integer: ";
    cin >> Number;

    for (int i = 1; i <= Number; ++i) {
        Sum += i;
    }

    cout << "Sum = " << Sum;
    return 0;
}
