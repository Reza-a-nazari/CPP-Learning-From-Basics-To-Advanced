#include <iostream>
#include <cmath>
using namespace std ;

int Add(int a , int b)
{
    return a+b ; 
}

int Minus(int a , int b)
{
    return a-b ; 
}

int Multiply(int a , int b)
{
    return a*b ; 
}

double Divison(double a , double b)
{
    // return fmod(a,b) ; 
    if(b==0)
    {
        throw runtime_error("Division by zero");
    }
    return a/b ;
}


int main()
{
    cout<<Add(1,2) << endl;

    cout<<Minus(1,2) << endl;

    cout<<Multiply(1,2) << endl;

    cout<<Divison(1,2) << endl;

    cout<<Divison(1,0) << endl;  //error !


}