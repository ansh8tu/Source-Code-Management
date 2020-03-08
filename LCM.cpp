========================================================================================================================================
//This is a program for Calculating LCM of two numbers	
========================================================================================================================================
#include <iostream>
using namespace std;

int main()
{
    int Number_1, Number_2, Maximum;

    cout << "Enter two numbers: ";
    cin >> Number_1 >> Number_2;
    
    // maximum value between n1 and n2 is stored in max
    Maximum = (Number_1 > Number_2) ? Number_1 : Number_2;

    do
    {
        if (Maximum % Number_1 == 0 && Maximum % Number_2 == 0)
        {
            cout << "LCM = " << Maximum;
            break;
        }
        else
            ++Maximum;
    } while (true);
    
    return 0;
}
