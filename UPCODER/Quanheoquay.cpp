#include <bits/stdc++.h>
using namespace std;

struct order {
    int idx, s, e, p;
};

int n, sum, Min;
vector<order> v;

int main() {
    cin.tie(0) -> sync_with_stdio(0);  
    cin >> n;
    v.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].s >> v[i].e >> v[i].p;
        v[i].idx = i + 1;
    }
    
    sort(v.begin(), v.end(), [] (order x, order y) {
        if (x.p == y.p) 
            return x.s < y.s;
        return x.p > y.p;
    });
    
    Min = INT_MAX;
    for (order x : v) {
        cout << x.idx << ' ';
        sum += x.e;
        Min = min(x.s, Min);
    }
    
    cout << '\n' << sum + Min;
    return 0;
}