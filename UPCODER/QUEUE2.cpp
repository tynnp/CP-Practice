#include <bits/stdc++.h>
using namespace std;

#define int int64_t
int n;
string str;
queue<int> q;
stack<int> s;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    
    while (n--) {
        cin >> str;
        
        if (str == "empty")
            cout << (s.empty() ? "YES" : "NO") << '\n';

        else if (str == "push") {
            int x;
            cin >> x;
            s.push(x);

        } else if (str == "pop") {
            cout << s.top() << '\n';
            s.pop();

        } else {
            cout << s.top() << '\n';
        }
    }
    
    return 0;
}