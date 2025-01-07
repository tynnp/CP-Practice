#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;
double n, d, h;
double a[MAXN];

double dt(double d, double h) {
    return d * h / 2;
}

void solve() {
    cin >> n >> d >> h;
    
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    
    double ans = dt(d, h) * n;
    
    for (int i = 2; i <= n; i++) {
        if (a[i - 1] + h > a[i]) {
            double k = h - (a[i] - a[i-1]);
            ans -= dt(d * k / h, k);
        }
    }
    
    cout << ans << '\n';
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cout << fixed << setprecision(6);
    int t;
    cin >> t;
    
    while (t--) 
        solve();
        
    return 0;
}