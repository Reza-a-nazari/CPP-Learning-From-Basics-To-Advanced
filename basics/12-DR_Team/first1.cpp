#include <iostream>
#include <stack>
#include <string>
using namespace std ;
#include <queue>
int main()
{
    string inp  ;
    cin>>inp;

    queue <char> RD ;

    for(int i=0 ; i<inp.length();i++)
    {
        RD.push(inp[i]);
    }
    bool temp1 = false ;
    bool temp2 = false ;


    while(RD.size() !=1)
    {
        if(RD.front() =='R')
        {
            RD.pop();
            if(RD.front()=='D')
            {
                RD.pop();
                RD.push('R');
            }
        }

        else if(RD.front() =='D')
        {
            RD.pop();
            if(RD.front()=='R')
            {
                RD.pop();
                RD.push('D');
            }
        }
    }


    cout<<RD.back()<<endl;

}