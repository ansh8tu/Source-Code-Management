===========================================================================================================================================
//This is a program for calculating HCF of Two Numbers	
===========================================================================================================================================
#include <iostream>
using namespace std;

int main()
{
    int Number_1, Number_2;

    cout << "Enter two numbers: ";
    cin >> Number_1 >> Number_2;
    
    while(Number_1 != Number_2)
    {
        if(Number_1 > Number_2)
            Number_1 -= Number_2;
        else
            Number_2 -= Number_1;
    }

    cout << "HCF = " << Number_1;
    return 0;
}
