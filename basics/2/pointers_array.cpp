#include <iostream>

using namespace std ;

int main()
{

    int m[5] = {100,1,2,3};
    int mylist[10]  = {*m,2,3,4,5}; //*m = 1   because pointer show first cell of array


    // cout<<mylist[0]<<endl ;


    for(int i =0 ; i<4 ; i++)
    {
        cout<<*(m+i)<<endl;
    }

    for(int j =0 ; j<4 ; j++)
    {
        cout<<m[j]<<endl ; 
    }
}