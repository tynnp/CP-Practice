#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6 + 5;

int n, t, ans;
int a[MAXN], cnt;
map<int, int> m;

int main() {
    cin >> n;

    while (n--) {
        cin >> t;
        if (!m[t]) 
            a[cnt++] = t;
        m[t]++;
    }

    for (int i = 0; i < cnt; i++) 
        if (m[a[i]] <= 5) ans += 100;
        else ans += 100 + (m[a[i]] - 5);

    cout << ans;
    return 0;
}