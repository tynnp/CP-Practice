#include <bits/stdc++.h>
using namespace std;

#define int int64_t
int n, x, s = 0;
vector<int> v;

int32_t main() {
    cin >> n;
    
    while(n--) {
        cin >> x;
        v.push_back(x);
    }
    
    sort(v.begin(), v.end());
    for(int i = 2; i < v.size(); ++i) 
        s += v[i];
    s += v[0];
    
    cout << s;
    return 0;
}