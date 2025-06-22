#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
#define int int64_t

int n, x, k, ans;
int sum[MAXN];
vector<pair<int, int>> vp;

int32_t main() {
    freopen("MARIO.INP", "r", stdin);
    freopen("MARIO.OUT", "w", stdout);
    cin.tie(0) -> sync_with_stdio(0);
   
    cin >> n >> x >> k;
    vp.resize(n);
    
    for (int i = 0; i < n; i++) 
        cin >> vp[i].first >> vp[i].second;
    sort(vp.begin(), vp.end());
    
    for (int i = 1; i <= n; i++)
        sum[i] = sum[i-1] + vp[i-1].second;
    
    int l, low, hight, lef, rig, mid, d;
    for (int r = 0; r < n; r++) {
        l = 0, low = 0, hight = r;
        
        while (low <= hight) {
            mid = (low + hight) / 2;
            lef = vp[mid].first;
            rig = vp[r].first;
            
            d = min(abs(x - lef), abs(x - rig)) + rig - lef;
            if (d <= k) {
                l = mid;
                hight = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        ans = max(ans, sum[r + 1] - sum[l]);
    }
    
    cout << ans;
    return 0;
}