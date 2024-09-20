/*
The 'extern' storage class gives a variable global scope.
It means that the variable can be accessed and used anywhere within the program, even outside the block where it was declared.
*/

#include <iostream>  
using namespace std;  
  
// Declaring an extern variable 'x'  
extern int a;  
  
void externStorageClass() {  
    cout << "Understanding the extern class\n";  
  
    // Accessing the extern variable 'x'  
    cout << "Value of the variable 'x', declared as extern: " << a << "\n";  
  
    // Modifying the value of extern variable 'x'  
    a = 2;  
  
    // Displaying the modified value of extern variable 'x'  
    cout << "Modified value of the variable 'x', declared as extern: " << a;  
}  
  
// Defining the extern variable 'x'  
int a = 0;  
  
int main() {  
    // Example of extern Storage Class  
    externStorageClass();  
  
    return 0;  
}  