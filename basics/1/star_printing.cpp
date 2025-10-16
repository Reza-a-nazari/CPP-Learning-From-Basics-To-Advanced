#include <iostream>

using namespace std ;
void stars()
{
    cout<<"*"<<endl;
    cout<<"**"<<endl;
    cout<<"***"<<endl;
    cout<<"****"<<endl;
    cout<<"*****"<<endl;
    cout<<"****"<<endl;
    cout<<"***"<<endl;
    cout<<"**"<<endl;
    cout<<"*"<<endl;

    cout<<endl;

}

void formula_stars()
{
    for(int i =0 ; i<5 ; i++)
    {
        for(int j =0 ; j<5 ; j++)
        {
            cout<<"*" ; 
            if(i==j)
            {
                break;
            }
            
        }
        cout<<endl ;
    }


    for(int ii = 5 ; ii <10 ; ii++)
    {
        for(int jj=0 ; jj<10-ii-1 ; jj++)
        {
            cout<<"*";
        }
        cout<<endl ;
    }
}

int main()
{
    stars();
    formula_stars();
}






//we want to print this Stars with Formula and without formula

// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *


// and you can put n , instead of 10 number !
