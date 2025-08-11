#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    stack<int> s;
    cin >> str;
    
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '(') s.push(i+1);
        else {
            cout << s.top() << " " << i+1 << '\n';
            s.pop();
        }
    }
        
    return 0;
}