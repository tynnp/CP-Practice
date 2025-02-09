#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6 + 5;

int n, m, a, b;
int64_t ar[MAXN], sum[MAXN];

int main() {
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++) {
        cin >> ar[i];
        sum[i] = sum[i-1] + ar[i];
    }
    
    while (m--) {
        cin >> a >> b;
        cout << sum[b] - sum[a-1] << endl;
    }
    
    return 0;
} 