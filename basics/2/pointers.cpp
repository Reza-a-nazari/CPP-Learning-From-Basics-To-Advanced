#include <iostream>

using namespace std ;

int main()
{
    // int &p = 3 ; //incorrect because int * can't be int

    int x = 3 ;

    int *p  = &x ; 


    // cout<<&p<<endl  ; // for example 0xd0f23ffd90


    // cout << *p ;


    int *second = p ;


    cout<<*second << endl;
    cout<<second << endl; //same
    cout<<p << endl;    //same

}