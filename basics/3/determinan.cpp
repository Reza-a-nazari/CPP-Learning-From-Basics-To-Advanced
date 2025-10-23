#include <iostream>

using namespace std ;


struct Matris
{
   int ** data ; 
};


int determinan_2(Matris a)
{
    return (a.data[0][0] * a.data[1][1] - a.data[0][1] * a.data[1][0]);
}


int main()
{
    Matris *M = new Matris ;

    M->data = new int*[2] ;

    M->data[0] = new int[2]{2,1};
    M->data[1] = new int[2]{3,4};


    cout<<determinan_2(*M);

}