#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> count(26, 0);
    for (char c : s)
        count[c - 'a']++;

    stack<char> t;
    string u;

    for(char c : s){
        t.push(c);
        count[c - 'a']--;

        char min_char = '{'; 
        for (int k = 0; k < 26; ++k) {
            if (count[k] > 0) {
                min_char = 'a' + k;
                break;
            }
        }

        while (!t.empty() && t.top() <= min_char) {
            u += t.top();
            t.pop();
        }
    }

    while (!t.empty()) {
        u += t.top();
        t.pop();
    }

    cout << u ;
    return 0;
}
