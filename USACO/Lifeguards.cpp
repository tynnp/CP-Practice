#include <iostream>
#include <vector>
using namespace std;

int n, ans, cnt[1001];
vector<pair<int, int>> v;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    freopen("lifeguards.in", "r", stdin);
    freopen("lifeguards.out", "w", stdout);
    cin >> n;
    v.resize(n);
    
    for (auto &p : v)
        cin >> p.first >> p.second;
    
    for (int i = 0; i < n; i++) 
        for (int j = v[i].first; j < v[i].second; j++)
            cnt[j]++;
    
    for (auto p : v) {
        for (int i = p.first; i < p.second; i++) 
            cnt[i]--;
        
        int sum = 0;
        for (int i = 0; i < 1001; i++)
            sum += cnt[i] > 0;
        
        ans = max(ans, sum);
        for (int i = p.first; i < p.second; i++) 
            cnt[i]++;
    }
    
    cout << ans;
    return 0;
}