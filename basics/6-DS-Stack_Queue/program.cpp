#include <iostream>
#include <string>
#include <sstream>
#include <stdexcept>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

struct Node {
    int value;
    int now_min ;
    Node* next;
    Node(int v,int minimum): value(v),now_min(minimum), next(nullptr) {}
};

class MyStack {
private:
    Node* top;
    int size;
public:
    MyStack(): top(nullptr), size(0) {}

    void Push(int value) { 

        if(top==nullptr){
            top = new Node(value,value);
        }
        else{
            int Min1 = min(value,top->now_min);
            Node * nextNode = new Node(value,Min1);

            nextNode->next = top ;

            top = nextNode ;
        }
        size++;
    }

    void Pop() { 
        if(top!= nullptr)
        {
            Node * temp = top ;
            top = top->next;
            delete temp ;
            size--;
        }
    }

    int Top() { 
        if(top!=nullptr)
            return top->value ;
        throw runtime_error("EMPTY");
    }

    int Size() { 
        return size ;
    }

    bool IsEmpty() { 
        if(top==nullptr)
            return true ;
        return false ;
    }

    void Reverse() {
        
        Node * main = top  ; 
        Node * Nex = nullptr ; 
        Node * prev = nullptr ;


        while(main !=nullptr)
        {
            Nex = main->next ;
            main->next = prev ;
            prev = main ;
            main = Nex ;
        }

        top = prev ;


        Node* node1 = top ;
        int Min_Val = INT_MAX;

        while(node1 !=nullptr)
        {
            Min_Val = min(Min_Val,node1->value);
            node1->now_min = Min_Val;
            node1 = node1->next ;
        }

    }

    int GetMin() {
        if (top == nullptr)
            throw runtime_error("EMPTY");
        return top->now_min;
    }

    ~MyStack() {
        while (top != nullptr) {
            Node* tmp = top;
            top = top->next;
            delete tmp;
        }
    }
};

//Do not modify main scope
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    MyStack stack;
    string line;
    if (!getline(cin, line)) return 0;

    auto trim = [](string &s) {
        size_t start = s.find_first_not_of(" \t\r\n");
        if (start == string::npos) { s = ""; return; }
        size_t end = s.find_last_not_of(" \t\r\n");
        s = s.substr(start, end + 1);
    };
    trim(line);
    if (line.empty()) return 0;

    int N = 0;
    try { N = stoi(line); } catch (...) { return 0; }

    for (int i = 0; i < N; ++i) {
        if (!getline(cin, line)) break;
        trim(line);
        if (line.empty()) { --i; continue; }

        string cmd, arg;
        {
            stringstream ss(line);
            ss >> cmd;
            if (!ss.eof()) {
                getline(ss, arg);
                if (!arg.empty() && arg.front() == ' ') arg.erase(arg.begin());
            } else arg = "";
        }

        try {
            if (cmd == "PUSH") {
                if (!arg.empty()) stack.Push(stoi(arg));
            } else if (cmd == "POP") {
                stack.Pop();
            } else if (cmd == "TOP") {
                if (stack.IsEmpty()) cout << "EMPTY\n";
                else cout << stack.Top() << '\n';
            } else if (cmd == "SIZE") {
                cout << stack.Size() << '\n';
            } else if (cmd == "REVERSE") {
                stack.Reverse();
            } else if (cmd == "GETMIN") {
                if (stack.IsEmpty()) cout << "EMPTY\n";
                else cout << stack.GetMin() << '\n';
            }
        } catch (...) {
            cout << "EMPTY\n";
        }
    }

    return 0;
}
