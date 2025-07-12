#include <bits/stdc++.h>
using namespace std;

int x;
stack<int> s;

bool prime(int n) {
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0)
            return false;
    return n > 1;
}

int main() {
    while (cin >> x) {
        if (!s.empty() && prime(s.top() + x)) {
            x += s.top();
            s.pop();
        }
        
        s.push(x);
    }
    
    cout << s.size() << '\n';
    while (!s.empty()) {
        cout << s.top() << ' ';
        s.pop();
    }
    
    return 0;
}