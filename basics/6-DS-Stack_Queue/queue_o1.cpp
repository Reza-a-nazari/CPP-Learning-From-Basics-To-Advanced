#include <iostream>
#include <stack>
using namespace std;

class QueueString {
private:
    stack<string> s1;  // for enqueue
    stack<string> s2;  // for dequeue

public:
    QueueString() {}  // Default Constructor

    void enqueue(string s) 
    {
        // just push at s1 → O(1)
        s1.push(s);
    }

    void dequeue() 
    {
        if (s1.empty() && s2.empty()) 
        {
            throw exception(); 
        }

        
        if (s2.empty()) 
        {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        s2.pop();
    }

    string front() 
    {
        if (s1.empty() && s2.empty()) 
        {
            throw exception(); 
        }

        
        if (s2.empty()) 
        {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        return s2.top();
    }

    int size() 
    {
        return s1.size() + s2.size();
    }

    bool empty() 
    {
        return s1.empty() && s2.empty();
    }
};

int main() {
    QueueString q;
    q.enqueue("hello");
    q.enqueue("world");
    q.enqueue("GPT");

    cout << "Front: " << q.front() << endl; 
    q.dequeue();
    cout << "Front: " << q.front() << endl; 
    cout << "Size: " << q.size() << endl;   

    return 0;
}
