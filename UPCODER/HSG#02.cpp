#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 1e6 + 5;

int a, b, ans;
int sum[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> a >> b;

    for (int i = 1; i < MAXN; i++) 
        for (int j = i; j < MAXN; j += i)
            sum[j] += i;

    for (int i = a; i <= b; i++) 
        ans += sum[i] - i > i;
    
    cout << ans;
    return 0;
}