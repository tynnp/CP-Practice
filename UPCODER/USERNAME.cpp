#include <bits/stdc++.h>
using namespace std;

int n, cnt;
string s;
map<string, int> m;

int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> s;

        if (m[s]) {
            cout << i << ' ';
            cnt++;
        } else {
            m[s]++;
        }
    }
    
    if (!cnt) cout << -1;
    return 0;
}