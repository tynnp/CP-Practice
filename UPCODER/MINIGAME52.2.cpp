#include <bits/stdc++.h>
using namespace std; 

int n, ans;
vector<int> v;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    n *= 2;
    v.resize(n);
    
    for (int &x : v) 
        cin >> x;
        
    sort(v.begin(), v.end());
    ans = INT_MAX;
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            vector<int> a;
            
            for (int k = 0; k < n; k++)
                if (k != i && k != j)
                    a.push_back(v[k]);
                
            int cnt = 0;    
            for (int k = 0; k < n - 2; k += 2) 
                cnt += abs(a[k] - a[k + 1]);
            ans = min(ans, cnt);
        }
    }

    cout << ans;
    return 0;
}