===========================================================================================================================================
//This is a program for Enumeration
===========================================================================================================================================
#include <iostream>
using namespace std;

enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main()
{
    week today;
    today = Thursday;
    cout << "Day " << today+1;
    return 0;
}

//Output
//Day:5
