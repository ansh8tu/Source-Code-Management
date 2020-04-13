=================================================================================================
This is a program for finding sum of 5 numbers using array
=================================================================================================


#include <iostream>
using namespace std;

int main() 
{
    int numbers[5], sum = 0;
    cout << "Enter any 5 numbers: ";
 
    for (int i = 0; i < 5; ++i) 
    {
        cin >> numbers[i];
        sum += numbers[i];
    }
    
    cout << "Sum of 5 numbers = " << sum << endl;  
    
    return 0;
}
