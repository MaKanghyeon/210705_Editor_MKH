//
// Created by 82107 on 2021-07-20.
//
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(void) {
    stack<int> s;
    stack<char>t;
    string string="";
    int num;
    cin >> string;
    cin >> num;
    for (int i = 0; i < string.size(); i++) {
        s.push(string[i]);
    }
    while (num--) {
        char ctr;
        cin >> ctr;
        if (ctr == 'P') {
            char c;
            cin >> c;
            s.push(c);
        }
        else if (ctr == 'L')
        { if (s.empty()) continue;
            else {
                t.push(s.top());
                s.pop();
            }
        }

        else if (ctr == 'B') {
            if (s.empty()) continue;
            else s.pop();
        }
        else if (ctr == 'D') {
            if (t.empty()) continue;
            else {
                s.push(t.top());
                t.pop();
            }
        }
    }
    while (!s.empty()) {
        t.push(s.top());
        s.pop();
    }
    while (!t.empty()) {
        cout << t.top();
        t.pop();
    }
    return 0;
}

