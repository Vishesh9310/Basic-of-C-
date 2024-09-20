#include <iostream>  
using namespace std;  
  
void registerStorageClass() {  
    cout << "Illustrating the register class\n";  
  
    // Declaring a register variable  
    register char b = 'G';  
  
    // Displaying the value of the register variable 'b'  
    cout << "Value of the variable 'b' declared as register: " << b;  
}  
  
int main() {  
    // Demonstrating the register Storage Class  
    registerStorageClass();  
    return 0;  
}  