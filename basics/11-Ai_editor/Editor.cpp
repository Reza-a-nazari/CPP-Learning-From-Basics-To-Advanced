#include <iostream>
#include <stack>
#include <queue>
#include <deque>
#include <string>

using namespace std ;

bool checking(deque<char> qu)
{
    int count = 0 ; 
    while(qu.empty() !=true)
    {
        char a = qu.front();
        qu.pop_front();

        if(a=='{')
        {
            count ++ ;
        }
        else if(a == '}')
        {
            count -- ;
            if(count<0)
            {
                return false ;
            }
        }
    }

    return count ==0 ;
}

int main()
{
    string Input ; 

    getline(cin,Input);

    int len_Input = Input.length() ;

    deque<char> Q ;

    for(int i=0 ; i<len_Input;i++)
    {
        Q.push_back(Input[i]);
    }

    if(checking(Q))
    {
        cout<<"Success"<<endl;
    }

    else
    {
        for(int i=0 ; i<len_Input ; i++)
        {
            if(Input[i]=='}')
            {
                cout<<i+1<<endl;
            }
            if(Input[i]=='{')
            {
                cout<<i+1<<endl;
            }
        }
    }




}