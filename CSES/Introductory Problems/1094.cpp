#include <iostream>
using namespace std;

#define fastIO ios_base::sync_with_stdio(0), cin.tie(0)
const int MAXN = 2e5 + 6;

int main() {
    fastIO;
    int n, a[MAXN];
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    long long ans = 0;
    for (int i = 2; i <= n; i++) {
        if (a[i-1] > a[i]) 
            ans += a[i-1] - a[i];
        a[i] = max(a[i-1], a[i]);
    }

    cout << ans;
    return 0;
}