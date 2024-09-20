//static storage class

#include<iostream>
using namespace std;

int static_storageClass(){
    cout<<"For static functions: ";
    static int x=0;
    x++;
    return x;
}

int non_static_storageClass(){
    cout<<"For non static functions: ";
    int x=0;
    x++;
    return x;
}

int main(){
    cout<<static_storageClass()<<endl;
    cout<<static_storageClass()<<endl;

    cout<<non_static_storageClass()<<endl;
    cout<<non_static_storageClass()<<endl;

    return 0;
}