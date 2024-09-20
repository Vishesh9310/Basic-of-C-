#include <iostream>
using namespace std;

int main(){
    // this statement throws an error.
    // int *ptr;
    // float a = 10.2;
    // ptr = &a;

    // this statement not throws an error.
    void *ptr;
    float a = 10.2;
    ptr = &a;

    cout<<ptr<<endl;
    cout<<&a<<endl;

    return 0;
}