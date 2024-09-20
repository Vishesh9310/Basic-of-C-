/*
The multidimensional array is also known as rectangular arrays in C++.
It can be two dimensional or three dimensional. The data is stored in tabular form (row ∗ column) which is also known as matrix.

*/

//declaration and initialization at same time
#include <iostream>  
using namespace std;  
int main()  
{  
  int test[3][3] =  
    {  
        {2, 5, 5},  
        {4, 0, 3},  
        {9, 1, 8}  };  //declaration and initialization    
    //traversal    
    for(int i = 0; i < 3; ++i)  
    {  
        for(int j = 0; j < 3; ++j)  
        {  
            cout<< test[i][j]<<" ";  
        }  
        cout<<"\n"; //new line at each row   
    }  
    return 0;  
}  