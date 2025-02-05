#include <iostream>
#include <map>
using namespace std;

#define int long long
const int MAXN = 2e5 + 5;

int n, ans;
int a[MAXN], sum[MAXN];
map<int, int> mp;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    
    for (int i = 1; i <= n; i++)
        sum[i] = sum[i-1] + a[i];
        
    mp[0] = 1;
    for (int i = 1; i <= n; i++) {
        ans += mp[(sum[i] % n + n) % n];
        mp[(sum[i] % n + n) % n]++;
    }

    cout << ans;
    return 0;
}