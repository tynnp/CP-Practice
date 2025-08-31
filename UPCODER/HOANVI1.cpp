#include <bits/stdc++.h>
using namespace std;

#define int int64_t
int n;
vector<int> v;

int32_t main() {
    cin >> n;
    v.resize(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    
    sort(v.begin(), v.end());
    
    do {
        for(int x : v)
            cout << x << ' ';
        cout << '\n';
    } while(next_permutation(v.begin(), v.end()));
    
    return 0;
}