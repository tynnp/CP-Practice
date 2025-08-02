#include <bits/stdc++.h>
using namespace std;

struct conditioner {
    int a, b, p, m;
};

int n, m, money, ans;
vector<int> fir(101), tmp(101);
vector<conditioner> v;

bool check() {
    for (int i = 1; i <= 100; i++)
        if (tmp[i] > 0)
            return false;
    return true;
}

void fill(int idx) {
    for (int i = v[idx].a; i <= v[idx].b; i++)
        tmp[i] -= v[idx].p;
    money += v[idx].m;
}

void unfill(int idx) {
    for (int i = v[idx].a; i <= v[idx].b; i++)
        tmp[i] += v[idx].p;
    money -= v[idx].m;
}

void Try(int idx) {
    fill(idx);
    
    if (check()) {
        ans = min(ans, money);
        unfill(idx);
        return;
    }
    
    for (int i = idx + 1; i < m; i++)
        Try(i);
    
    unfill(idx);
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> m;
    v.resize(m);
    
    for (int i = 0; i < n; i++) {
        int s, t, c;
        cin >> s >> t >> c;
        
        for (int i = s; i <= t; i++) 
            fir[i] += c, tmp[i] += c;
    }
    
    for (auto &con : v)
        cin >> con.a >> con.b >> con.p >> con.m;
        
    ans = 999999;
    for (int i = 0; i < m; i++) {
        money = 0;
        tmp = fir;
        Try(i);
    }
      
    cout << ans;
    return 0;
}