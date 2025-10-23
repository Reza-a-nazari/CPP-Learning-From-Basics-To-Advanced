#include <iostream>
#include <stack>
using namespace std;

class QueueString {
private:
    stack<string> s1;  // برای enqueue
    stack<string> s2;  // برای dequeue

public:
    QueueString() {}  // کانستراکتور پیش‌فرض

    void enqueue(string s) 
    {
        // فقط push در s1 → O(1)
        s1.push(s);
    }

    void dequeue() 
    {
        if (s1.empty() && s2.empty()) 
        {
            throw exception(); // Queue خالی است
        }

        // اگر s2 خالی بود، همه عناصر s1 را به s2 منتقل کن
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
            throw exception(); // Queue خالی است
        }

        // اگر s2 خالی است، باید s1 را منتقل کنیم
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

    cout << "Front: " << q.front() << endl; // hello
    q.dequeue();
    cout << "Front: " << q.front() << endl; // world
    cout << "Size: " << q.size() << endl;   // 2

    return 0;
}
