#include <iostream>
#include <stack>
#include <queue>
#include <deque>
#include <vector>
#include <string>


using namespace std ;


class CardDeck
{
    private:
        deque <int> deck ;
        // vector<int> discarded ; 
    public :
        CardDeck(int n)
        {
            for(int i =1 ; i<=n ; i++)
            {
                deck.push_back(i); 
            }
        }

        void Play()
        {
            int i= 1 ;
            while(deck.size()!=0)
            {
                if(i%2==1)
                {
                    deck.pop_back();
                    if(i==1)
                    {
                        cout<<i<<",";
                    }
                    else
                    {
                        cout<<" "<<i<<",";
                    }
                }
                if(i%2==0)
                {
                    int x = deck.back();
                    deck.pop_back();
                    deck.push_front(x);
                }
                i++ ;
            }
            i = 1 ;
        }
};