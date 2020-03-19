===========================================================================================================================================
//This is a tprogram to swap two numbers    
===========================================================================================================================================
#include <iostream>
using namespace std;

int main()
{
    int Number_1 = 5, Number_2 = 10, temporary;

    cout << "Before swapping." << endl;
    cout << "Number_1 = " << Number_1 << ", Number_2 = " << Number_2 << endl;

    temp = Number_1;
    Number_1 = Number_2;
    Number_2 = temp;

    cout << "\nAfter swapping." << endl;
    cout << "Number_1 = " << Number_1 << ", Number_2 = " << Number_2 << endl;

    return 0;
}
