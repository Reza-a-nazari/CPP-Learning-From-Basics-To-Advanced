#include <iostream>

using namespace std ;

struct Node //default is public
{
    int data ; 
    Node * Next ; 
};



int main()
{
    Node * first = new Node ;
    first->data = 10 ;
    first->Next = nullptr ; 

    cout << "data in first node  : " << first->data << endl ; 

    delete first ;  // for decreasing ram usage

    return 0 ;
}