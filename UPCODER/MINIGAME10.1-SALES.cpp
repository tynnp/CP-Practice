#include <bits/stdc++.h>
using namespace std;

int n, m, x, ans;
vector<int> v;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> m;
    
    while (n--) {
        cin >> x;
        if (x < 0)
            v.push_back(x);
    }
    
    sort(v.begin(), v.end());
    for (int i = 0; i < min(m, (int) v.size()); i++)
        ans -= v[i];
    
    cout << ans;
    return 0;
}