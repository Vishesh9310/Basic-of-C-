//all variable are auto by default.

#include<iostream>
using namespace std;

void auto_storageClass(){
    int a=32;
    int b=43;

    cout<<"a "<<a<<endl;
    cout<<"b "<<b<<endl;
}

int main(){
    auto_storageClass();

    return 0;
}