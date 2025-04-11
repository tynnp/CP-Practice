#include <bits/stdc++.h>
using namespace std;

struct CongViec {
    int s, f;
};

int n;
vector<CongViec> v;
vector<int> res;

int main() {
    cin >> n;
    v.resize(n);
    
    for (int i = 0; i < n; i++)
        cin >> v[i].s >> v[i].f;
        
    sort(v.begin(), v.end(), [] (auto x, auto y) {
        return x.f <= y.f;
    });
    
    res.push_back(v[0].f);
    for (int i = 1; i < n; i++) 
        if (v[i].s >= res.back()) 
            res.push_back(v[i].f);
    
    cout << res.size();
    return 0;
}