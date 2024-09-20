#include<iostream>
using namespace std;

int factorial(int n) {  
 if (n <= 1) // Base case  
 return 1;  
 else   
 return n * factorial(n - 1);   
}  

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;

    cout<<"Output: "<<factorial(num)<<endl;
    return 0;
}