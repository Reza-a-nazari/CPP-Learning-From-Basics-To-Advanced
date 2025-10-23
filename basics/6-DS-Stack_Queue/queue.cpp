#include <iostream>
#include <stack>
#include <queue>

using namespace std ;

class QueueString
{
private:
    stack<string> s1 ;
    stack<string> s2 ;
public:

    QueueString(stack<string> a , stack<string> b)
    {
        s1 = a ;
        s2 = b ;
    }
    void enque(string s)
    {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }

        s1.push(s);

        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }

    void deque()
    {
        if(s1.empty())
            throw new exception ;
        s1.pop();
    }

    string front()
    {
        if(s1.empty())
            throw new exception ;
        return s1.top();
    }

    int size()
    {
        return s1.size();
    }

};




int main() {
    stack<string> a, b;
    QueueString q(a, b);

    q.enque("hello");
    q.enque("world");

    cout << "Front: " << q.front() << endl;
    cout << "Size: " << q.size() << endl;

    q.deque();
    cout << "Front after deque: " << q.front() << endl;

    return 0;
}