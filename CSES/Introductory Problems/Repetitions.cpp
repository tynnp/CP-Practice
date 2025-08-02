#include <bits/stdc++.h>
using namespace std;

string s;
int ans;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> s;

    int i = 0, j = 0;
    while (i < s.size() && j < s.size()) {
        j++;
        while (s[i] != s[j]) i++;
        ans = max(ans, j - i + 1);
    }

    cout << ans;
    return 0;
} 