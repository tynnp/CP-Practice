#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 20;
int n, a[MAXN];

int solve(int idx, int sumA, int sumB) {
    if (idx == n) 
        return abs(sumA - sumB);
        
    int x = solve(idx + 1, sumA + a[idx], sumB);
    int y = solve(idx + 1, sumA, sumB + a[idx]);
    return min(x, y);
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    cout << solve(0, 0, 0);
    return 0;
}