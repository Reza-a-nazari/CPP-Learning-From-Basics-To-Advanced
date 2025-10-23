#include <vector>
#include <iostream>
using namespace std ;


int main()
{
    cout<<"We are using vector now"<<endl;

    vector<int> temp ; 

    temp.push_back(4);

        temp.push_back(5);

            temp.push_back(6);

                temp.push_back(7);

                    temp.push_back(8);

                        temp.push_back(9);

                            temp.push_back(10);


    // for(int i = 0 ; i<temp.size() ; i++)
    // {
    //     cout<<"index of "<<i<<"from vector , and value is "<<temp[i]<<endl;
    // }
    


    vector<int> myvector = {1,2,3,4,5};

    myvector.pop_back();
    myvector.push_back(1000);
    for(int i = 0 ; i<myvector.size() ; i++)
    {
        cout<<myvector[i] << " " ;
    }

    
    
}