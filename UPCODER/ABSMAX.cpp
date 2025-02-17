#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;
int n, a[MAXN];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    int x = abs(a[n-1] + a[n-2]);
    int y = abs(a[0] + a[1]);

    cout << max(x, y);
    return 0;
}