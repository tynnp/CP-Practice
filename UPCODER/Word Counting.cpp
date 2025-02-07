#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e3 + 5;
int t, a[MAXN];

void solve() {
    int n = 0;
    string line;
    getline(cin, line);
    
    for (char &c : line) 
        if (!isalpha(c))
            c = ' ';

    stringstream ss(line);
    while (ss >> line) 
        a[n++] = line.size();

    int i = 0, j = 0, ans = 0;

    while (i < n && j < n) {
        j++;

        while (a[i] != a[j]) i++;
        ans = max(ans, j - i + 1);
    }
    
    ans = max(ans, j - i + 1);
    cout << ans << '\n';
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> t;
    cin.ignore();
    while (t--) solve();
    return 0;
}