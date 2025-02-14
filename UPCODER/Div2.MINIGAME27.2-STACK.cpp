#include <bits/stdc++.h>
using namespace std;

int main() {
    int q, t, x;
    stack<int> s;

    cin >> q;
    while (q--) {
        cin >> t;

        if (t == 1) {
            cin >> x;
            s.push(x);
        }

        if (t == 2) {
            s.pop();
        }

        if (t == 3) {
            int tmp = s.top();
            s.pop();
            cout << s.top() << '\n';
            s.push(tmp);
        }
    }

    return 0;
}