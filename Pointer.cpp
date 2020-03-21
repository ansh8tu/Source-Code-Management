========================================================================================================================================
//This is a Program for pointers
========================================================================================================================================
#include <iostream>
using namespace std;
int main()
{
    int *pointer_to_a, a;
    
    a = 5;
    cout << "Address of a (&a): " << &a << endl;
    cout << "Value of a (a): " << a << endl << endl;

    pointer_to_a = &a;   
    cout << "Address that pointer pc holds (pointer_to_a): "<< pointer_to_a << endl;
    cout << "Content of the address pointer pc holds (*pointer_to_a): " << *pointer_to_a << endl << endl;
    
    a = 11;  
    cout << "Address pointer pointer_to_a holds (pointer_to_a): " << pointer_to_a << endl;
    cout << "Content of the address pointer pointer_to_a holds (*pointer_to_a): " << *pointer_to_a << endl << endl;

    *pointer_to_a = 2; 
    cout << "Address of a (&a): " << &a << endl;
    cout << "Value of a (a): " << a << endl << endl;

    return 0;
}
