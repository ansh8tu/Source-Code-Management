===========================================================================================================================================
//This is a program for delete ptr
===========================================================================================================================================  
#include <iostream>  
#include <cstdlib>  
using namespace std;  
  
int main()  
{  
 int *ptr;  
 ptr=new int;  
 *ptr=68;  
 std::cout << "The value of p is : " <<*ptr<< std::endl;  
 delete ptr;  
 std::cout <<"The value after delete is : "  <<*ptr<< std::endl;  
 return 0;  
}
