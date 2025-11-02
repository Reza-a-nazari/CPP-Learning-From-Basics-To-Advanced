#include <iostream>
#include <stack>
#include <queue>
#include <deque>
#include <vector>
#include <string>
//DOTA2 Senate
using namespace std ;

int main()
{
    string inp ; 

    cin>>inp ;

    queue<char> inputs ; 
    
    deque<int> R_index ; 

    deque<int> D_index ;

    for(int i =0 ; i<inp.length() ; i++)
    {
        inputs.push(inp[i]);
    }
    int hole_area = inputs.size();
    // int size_arr = inputs.size();
    for(int j=0 ; j<inp.length();j++)
    {
        if( !inputs.empty() && inputs.front()=='R')
        {
            R_index.push_back(j);
        }
        else if (!inputs.empty() && inputs.front()=='D')
        {
            D_index.push_back(j);
        }
        else
        {
            
        }
        inputs.pop();
        // cout<<inputs.front()<<" ";
        // inputs.pop();
    }

    // int size_R = R_index.size() ;

    // int Size_D = D_index.size();
    // cout<<"R =[";
    // for(int i=0 ; i<size_R;i++){
    //     cout<<R_index.front()<<" ";
    //     R_index.pop();
    // }
    // cout<<"]";

    // cout<<endl;
    // cout<<"D = [";
    // for(int i=0 ; i<Size_D;i++){
    //     cout<<D_index.front()<<" ";
    //     D_index.pop();
    // }
    // cout<<"]";

    int ptr_temp =0 ;

    

    while(!R_index.empty() && !D_index.empty())
    {
        int temp = 0 ;
        if(!R_index.empty() && !D_index.empty()){
            if(R_index.front()>=D_index.front())
            {

                temp = D_index.front() +hole_area ;
                if(!D_index.empty()){
                    D_index.pop_front();
                }

                D_index.push_back(temp);
                if(!R_index.empty()){
                    R_index.pop_front();
                }

                if( R_index.empty() ||  D_index.empty())
                    break;

            }
            if(R_index.front()<D_index.front())
            {

                temp = R_index.front() +hole_area ;
                if(!R_index.empty()){
                    R_index.pop_front();
                }
                R_index.push_back(temp);
                if(!D_index.empty()){
                    D_index.pop_front();
                }

                if( R_index.empty() ||  D_index.empty())
                    break;
            }   
        }



    }

        if(!R_index.empty())
        {
            cout<<"Radiant"<<endl;
        }
        if(!D_index.empty())
        {
            cout<<"Dire"<<endl;
        }
    
}