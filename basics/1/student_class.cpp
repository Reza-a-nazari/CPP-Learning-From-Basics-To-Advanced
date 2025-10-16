#include <iostream>

using namespace std ;

class Std
{
    private : 
        int id ; 

    public :
        int getid() const
        {
            return id ; 
        }

        void setid(int val)
        {
            id = val ; 
        }
};

class Operand
{
    public : 
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

};

int main()
{
    Std reza ; 
    reza.setid(403);
    int a = 100 ; 
    int b = 1000 ; 

    Operand op ; 

    cout<<op.Add(reza.getid(),b);
    // cout<<reza.getid();
}