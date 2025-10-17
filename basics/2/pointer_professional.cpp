#include <iostream>

using namespace std ;


void reverse(int * array , int size)
{
        for(int i=0 ; i<size/2 ; i++)
        {

            int temp = *(array+i);
            *(array+i) = *(array + (size-i-1));
            *(array + (size-i-1)) = temp ;
        }
}



int main()
{
    cout<<"A3"<<endl;
    int arr[5] = {1,2,3,4,5};

    //{5,4,3,2,1}

    reverse(arr,5);

    for(int i =0 ; i<5;i++)
    {
        cout<<arr[i] ;
    }
}