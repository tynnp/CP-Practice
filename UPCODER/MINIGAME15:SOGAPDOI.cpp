#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5 + 5;

int n, ans;
int a[MAXN];
map<int, int> m;

int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        m[a[i]]++;
    }

    for (int i = 1; i <= n; i++) {
        if (a[i] == 0 && m[0] > 1)
            ans++;
        else if (a[i] > 0 && a[i] % 2 == 0 && m[a[i] / 2])
            ans++;
    }
    
    cout << ans;
    return 0;
}