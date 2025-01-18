#include <bits/stdc++.h>
using namespace std;

#define int long long 
const int MAXN = 2005;

int k, n;
int a[MAXN], b[MAXN], sum[MAXN];
set<int> s;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> k >> n;
    
    for (int i = 1; i <= k; i++)
        cin >> a[i];
        
    for (int i = 1; i <= n; i++) 
        cin >> b[i];
    
    for (int i = 1; i <= k; i++)
        sum[i] = sum[i - 1] + a[i];
    
    for (int i = 1; i <= n; i++) {
        set<int> val;
        
        for (int j = 1; j <= k; j++) 
            val.insert(b[i] - sum[j]);
        
        if (i == 1) {
            s = val;
            continue;
        }
        
        set<int> tmp;
        
        for (int x : val)
            if (s.find(x) != s.end())
                tmp.insert(x);
                
        s = tmp;
    }
        
    cout << s.size();
}