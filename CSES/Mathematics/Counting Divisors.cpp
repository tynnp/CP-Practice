#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 1e6 + 5;
int n, x, d[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);

    for (int i = 1; i < MAXN; i++) 
        for (int j = i; j < MAXN; j += i)
            d[j] += 1;
        
    cin >> n;
    while (n--) {
        cin >> x;
        cout << d[x] << '\n';
    }

    return 0;
}