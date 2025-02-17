#include <bits/stdc++.h>
using namespace std;
const int MAXN = 3e5 + 5;

int n, t;
int a[MAXN];
int stmax[2 * MAXN];
int stmin[2 * MAXN];

void build() {
    for (int i = 0; i < n; i++) {
        stmax[n + i] = a[i];
        stmin[n + i] = a[i];
    }

    for (int i = n - 1; i > 0; i--) {
        stmax[i] = max(stmax[i << 1], stmax[i << 1 | 1]);
        stmin[i] = min(stmin[i << 1], stmin[i << 1 | 1]);
    }
}

void query(int l, int r) {
    int mx = INT_MIN, mn = INT_MAX;

    for(l += n, r += n; l < r; l >>= 1, r >>= 1) {
        if(l & 1) {
            mx = max(mx, stmax[l]);
            mn = min(mn, stmin[l]);
            l++;
        }

        if(r & 1) {
            r--;
            mx = max(mx, stmax[r]);
            mn = min(mn, stmin[r]);
        }
    }
    
    cout << mx << ' ' << mn << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("MAXMINTT.inp", "r", stdin);
    freopen("MAXMINTT.out", "w", stdout);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    build();
    
    cin >> t;
    while(t--) {
        int h, k;
        cin >> h >> k;
        query(--h, k);
    }
    
    return 0;
}