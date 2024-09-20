//nested if else
//check number is positive or negative.if number is positive so check number is even or odd

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    if(num>0){
        if(num%2==0){
            cout<<"number is even"<<endl;
        }else{
            cout<<"number is odd"<<endl;
        }
    }else{
        cout<<"negative number";
    }
    return 0;
}