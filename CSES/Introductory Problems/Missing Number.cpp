#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;
int64_t n, x;
bool a[MAXN];

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    for (int i = 1; i < n; i++) {
        cin >> x;
        a[x] = true;
    }

    for (int i = 1; i <= n; i++) 
        if (!a[i]) 
            cout << i;

    return 0;
}