/*With function overloading, multiple functions can have the same name with different parameters:
*/

#include<iostream>
using namespace std;

int sum(int a,int b){
    return a+b;
}

double sum(double a,double b){
    return a+b;
}

int main(){
    int sum1=sum(12,34);
    double sum2=sum(12.4,32.7);
    cout<<"int : "<<sum1<<endl;
    cout<<"double : "<<sum2<<endl;

    return 0;
}