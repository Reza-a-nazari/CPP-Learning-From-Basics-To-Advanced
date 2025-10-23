#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack <int> temp ;

    temp.push(2);
    temp.push(3);
    temp.push(4);
    temp.push(5);
    temp.push(6);

    int len = temp.size();

    for(int i=0 ; i<len;i++)
    {
        cout<<temp.top()<<endl;
        temp.pop();
    }
}