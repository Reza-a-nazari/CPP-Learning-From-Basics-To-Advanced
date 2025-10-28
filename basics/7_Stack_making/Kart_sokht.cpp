#include <stack>
#include <vector>
#include <queue>
#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main() {
    vector<int> Inputs;
    string x;
    deque<int> main_number_from_0_to_n;
    
    while (getline(cin, x)) {
        if (x.empty()) {
            break;
        }
        Inputs.push_back(stoi(x));
    }
    
    int j = 0;
    while (j < Inputs.size()) {
        int n = Inputs[j];
        main_number_from_0_to_n.clear();
        for (int i = 1; i <= n; i++) {
            main_number_from_0_to_n.push_back(i);
        }
        
        bool first_line = true;
        while (!main_number_from_0_to_n.empty()) {
            if (main_number_from_0_to_n.size() == 1) {
                if (!first_line) {
                    cout << endl;
                }
                cout << main_number_from_0_to_n.front() << endl;
                break;
            }
            
            int printed = main_number_from_0_to_n.front();
            main_number_from_0_to_n.pop_front();
            
            if (!first_line) {
                cout << ", ";
            }
            cout << printed;
            
            first_line = false;
            
            if (!main_number_from_0_to_n.empty()) {
                int next_val = main_number_from_0_to_n.front();
                main_number_from_0_to_n.pop_front();
                main_number_from_0_to_n.push_back(next_val);
            }
        }
        
        j++;
    }
    
    return 0;
}