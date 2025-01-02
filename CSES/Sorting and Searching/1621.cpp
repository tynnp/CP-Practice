#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 2e5 + 5;
int n, a[MAXN];

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    int ans = 1;
    for (int i = 1; i < n; i++)
        if (a[i-1] != a[i])
            ans++;

    cout << ans;
    return 0;
}