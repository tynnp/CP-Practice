#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
int q, k;

char calc(int k) {
    int d = 1;
    int cnt = 9;
    int srt = 1;
    
    while (k > d * cnt) {
        k -= d * cnt;
        d++;
        cnt *= 10;
        srt *= 10;
    }
    
    string s = to_string(srt + (k-1)/d);
    return s[(k-1) % d];
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> q;
    
    while (q--) {
        cin >> k;
        cout << calc(k) << '\n';
    }

    return 0;
}