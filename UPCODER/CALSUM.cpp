#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6 + 5;

int n, m, a, b;
int a[MAXN], sum[MAXN];

int main() {
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum[i] = sum[i-1] + a[i];
    }
    
    while (m--) {
        cin >> a >> b;
        cout << sum[b] - sum[a-1] << endl;
    }
    
    return 0;
} 