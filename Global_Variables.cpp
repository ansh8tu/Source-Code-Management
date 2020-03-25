===========================================================================================================================================
//Added Program for global variables
===========================================================================================================================================
#include <iostream>
using namespace std;

int Number = 12;
void fun();

int main()
{
    ++Number;
    cout << Number <<endl;
    fun();
    return 0;
}

void fun()
{
    ++Number;
    cout << Number;
}

//Output of the above code is:
//13
//14
