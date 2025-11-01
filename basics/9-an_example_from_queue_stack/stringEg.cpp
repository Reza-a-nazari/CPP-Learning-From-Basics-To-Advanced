#include <iostream>
#include<string>
#include <queue>
#include <stack>
using namespace std ;
struct bracket
{
    char identity1='[';
    char identity2=']';
    int count = 0;
    bool IsMirror ; 
};


struct bracket2
{
    char identity1='{';
    char identity2='}';
    int count = 0;
    bool IsMirror ; 
};


struct Parantheses
{
    /* data */
    char identity1='(';
    char identity2=')';
        int count = 0;
    bool IsMirror ;
};

struct SingleQoute
{
    /* data */  
    char identity='\'';
        int count= 0 ;
    bool IsMirror ;
};

struct DoubleQoute
{
    /* data */ 
    char identity = '"';
        int count=0;
    bool IsMirror ;
};


int main()
{

   bracket * p1 = new bracket();
   bracket2 * p2 = new bracket2();
   Parantheses *p3 = new Parantheses();
   SingleQoute *s1= new SingleQoute();
   DoubleQoute *d = new DoubleQoute();

   string s ;
   
   cin>> s ;

   int len_s = s.length() ; 

    bool left_bracket = false ;

    bool right_bracket = false ;

    
    bool left_bracket2 = false ;

    bool right_bracket2 = false ;

    
    bool left_parantheses = false ;

    bool right_parantheses = false ;

    
    bool SingeQ = false ;

    bool DoubleQ = false ;
    int count_single ;
    int count_Double ;

    for(int j = 0 ; j<len_s ; j++)
    {
        if(s[j]==s1->identity)
        {
            count_single ++ ;
        }
        if(s[j]==d->identity)
        {
            count_Double ++ ;
        }
    }

    if(count_single == 2)
    {
        s1->IsMirror == true ;
    }

    if(count_Double == 2)
    {
        d->IsMirror == true ;
    }

   for(int i=0 ; i<s.length() ;i++)
   {
        // if((s[i]==p1->identity1 || s[i]==p1->identity2)==true)
        // {
        //     p1->count = i ;
        // }

        if(s[i]==left_bracket2)
        {
            left_bracket2 = true ;
        }
        if(s[i]==right_bracket2)
        {
            right_bracket2 = true ;
        }

        if(s[i]==left_bracket)
        {
            left_bracket = true ;
        }

        
        if(s[i]==right_bracket)
        {
            right_bracket = true ;
        }

        if(s[i]==right_parantheses)
        {
            right_parantheses = true ;
        }

        if(s[i]==left_parantheses)
        {
            left_parantheses = true ;
        }
     
   }

   if((left_bracket && right_bracket)==true)
   {
        p1->IsMirror = true; 
   }

   if((right_parantheses &&left_parantheses)==true)
   {
        p3->IsMirror = true ;
   }


   if((left_bracket2&&right_bracket2)==true)
   {
        p2->IsMirror = true; 
   }
      if(p1->IsMirror && p2->IsMirror )
   {
        cout<<"Success"<<endl;
   }
      if(s1->IsMirror && d->IsMirror)
   {
        cout<<"Success"<<endl;
   }
      if( p3->IsMirror && s1->IsMirror && d->IsMirror)
   {
        cout<<"Success"<<endl;
   }

   if(p1->IsMirror && p2->IsMirror && p3->IsMirror && s1->IsMirror && d->IsMirror)
   {
        cout<<"Success"<<endl;
   }

   if(SingeQ !=true)
   {
    for(int i=0 ; i<len_s ; i++)
    {
        if(s[i]==s1->identity)
        {
            cout<<i+1<<endl;
        }
    }
   }

    if(DoubleQ !=true)
   {
    for(int i=0 ; i<len_s ; i++)
    {
        if(s[i]==d->identity)
        {
            cout<<i+1<<endl;
        }
    }
   }


   if((left_bracket&&right_bracket)!=true)
   {
       for(int i=0 ; i<len_s;i++)
       {
        if((s[i]==p1->identity1 || s[i]==p1->identity2)==true)
        {
            p1->count = i ;
        }
       }
        cout<<p1->count+ 1 ;
   }







}