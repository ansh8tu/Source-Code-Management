==========================================================================================================================================
 // This is a program for determining the frequency of characters in a string   
==========================================================================================================================================
#include <iostream>
using namespace std;

int main()
{
    string str = "C++ Programming is kinda' cool";
    char checkCharacter = 'a';
    int count = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] ==  checkCharacter)
        {
            ++ count;
        }
    }

    cout << "Number of " << checkCharacter << " = " << count;

    return 0;
