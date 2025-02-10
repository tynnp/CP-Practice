#include <bits/stdc++.h>
using namespace std;

bool check(string s) {
    int n = s.size();

    for (int i = 0; i < n/2; i++)
        if (s[i] != s[n-i-1])   
            return false;

    return true;
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int t, a, b;
    string s;
    cin >> t;

    while (t--) {
        cin >> a >> b;
        s = to_string(a + b);
        cout << check(s) << '\n';
    }

    return 0;
}