#include <iostream>
using namespace std;

int n, s, ans = 1e9;
int a[1005];

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    freopen("cbarn.in", "r", stdin);
    freopen("cbarn.out", "w", stdout);
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
    }
    
    for (int i = 0; i < n; i++) {
        int pos = i;
        int v = s;
        int sum = 0;
        
        for (int j = 1; j <= n; j++) {
            if (j == n) 
                break;
                
            v -= a[pos % n];
            sum += v;
            pos++;
        }
        
        ans = min(ans, sum);
    }
    
    cout << ans;
    return 0;
}