===========================================================================================================================================
//This is a program to print the table of numbers	
===========================================================================================================================================
#include <iostream>
using namespace std;

int main()
{
    int Number,Table_upto;

    cout << "Enter a positive integer: ";
    cin >> Number;
	
	cout<<"Enter the number untill which you want to print the table: ";
	cin>>Table_upto;

    for (int i = 1; i <= Table_upto; ++i) {
        cout << Number << " * " << i << " = " << Number * i << endl;
    }
    
    return 0;
}
