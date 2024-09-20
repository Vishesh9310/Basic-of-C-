// We can call the function with the help of a function pointer by simply using the name of the function pointer.
//The syntax of calling the function through the function pointer would be similar as we do the calling of the function normally.
// Let's understand this scenario through an example.

#include <iostream>  
using namespace std;  
int add(int a , int b)  
{  
    return a+b;  
}  
int main()  
{  
 int (*funcptr)(int,int);  // function pointer declaration  
 funcptr=add; // funcptr is pointing to the add function  
 int sum=funcptr(5,5);  
 std::cout << "value of sum is :" <<sum<< std::endl;  
  return 0;  
}  


/*
#include <iostream>  
using namespace std;  
void printname(char *name)  
{  
    std::cout << "Name is :" <<name<< std::endl;  
}  
  
int main()  
{  
    char s[20];  // array declaration  
    void (*ptr)(char*);  // function pointer declaration  
    ptr=printname;  // storing the address of printname in ptr.  
    std::cout << "Enter the name of the person: " << std::endl;  
    cin>>s;  
    cout<<s;  
    ptr(s);  // calling printname() function  
   return 0;  
}  */