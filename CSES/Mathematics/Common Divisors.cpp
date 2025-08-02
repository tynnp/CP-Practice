#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 1e6 + 5;
int n, x, freq[MAXN]; 

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        freq[x]++;
    }

    for (int i = MAXN - 1; i >= 1; i--) {
        int cnt = 0;

        for (int j = i; j < MAXN; j += i) {
            cnt += freq[j];
            if (cnt >= 2) break;  
        }

        if (cnt >= 2) {
            cout << i << '\n';
            return 0;
        }
    }

    return 0;
}