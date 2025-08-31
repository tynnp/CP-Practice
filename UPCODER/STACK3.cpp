#include <bits/stdc++.h>
using namespace std;

#define int int64_t

int n;
string str;
stack<string> s;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        cin >> str;

        if (str == "type") {
            string t;
            cin >> t;
            s.push(t);

        } else if (str == "undo") {
            if (!s.empty()){
                s.pop();
            }
        }
    }

    if (s.empty()) {
        cout << "empty";
        return 0;
    }

    vector<string> ans;

    while (!s.empty()) {
        ans.push_back(s.top());
        s.pop();
    }

    for (int i = ans.size() - 1; i >= 0; i--) 
        cout << ans[i];
    
    return 0;
}