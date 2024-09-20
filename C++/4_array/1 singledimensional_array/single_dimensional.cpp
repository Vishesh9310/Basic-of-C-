//single dimensional array
#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    //using for each
    /*  
    for (int i: arr)     
    {    
        cout<<i<<"\n";    
    }   
    */

    return 0;
}