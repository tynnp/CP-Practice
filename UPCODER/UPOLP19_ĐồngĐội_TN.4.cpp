#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 1e5 + 5;

int n, k, ans;
int a[MAXN];
map<int, int> m;

int32_t main() {
    cin >> n >> k;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int sum = 0;
    m[0] = 0;
    
    for (int i = 0; i < n; i++) {
        sum += a[i];
        int x = sum % k;

        if (m.find(x) != m.end())
            ans = max(ans, i + 1 - m[x]);
        else 
            m[x] = i + 1;
    }

    cout << ans;
    return 0;
}