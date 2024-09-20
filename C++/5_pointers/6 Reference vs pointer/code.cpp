#include <iostream>  
using namespace std;  
void func(int &);  
int main()  
{  
  int i=10;
  int &a=i; 
  //int *ptr=i;
  int *ptr=&i;
  std::cout << "The address of 'a' variable is : " <<a<< std::endl;  
  std::cout << "The address of 'i' variable is : " <<&i<< std::endl;  
  return 0;  
}  