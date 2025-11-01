#include <iostream>
#include <stack>
#include <deque>
#include <string>
#include <map>
using namespace std ;



int check(const string& s)
{
    stack<pair<char,int>> st;

    bool inQ = false ;

    char quoChar = 0 ;

    map<char,char> matching = {{'(',')'},{'[',']'},{'{','}'}};

    for(int i=0 ; i<s.size();i++)
    {
        char c = s[i];

        if(inQ)
        {
            if(c== quoChar)
            {
                inQ = false;
                st.pop();
            }
            continue;
        }

        if (c == '"' || c == '\'') {
            inQ = true;
            quoChar = c;
            st.push({c, i+1});
            continue;
        }

        if (matching.count(c)) {
            st.push({c, i+1});
        }
        else if (  c==']' || c=='}' || c==')') {
            if (st.empty()) 
                return i+1;
            char top = st.top().first;
            if (!matching.count(top) || matching[top] != c) 
                return i+1;
            st.pop();
        }
    }


    if (!st.empty()) {
        while (!st.empty()) {
            auto p = st.top();
            st.pop();
            if (st.empty()) {
                return p.second;
            }
        }
    }
    return -1;
    

}

int main() {
    string s;
    getline(cin, s);

    int result = check(s);

    if (result == -1)
        cout << "Success" << endl;
    else
        cout << result << endl;

    return 0;
}