#include <bits/stdc++.h>
using namespace std;

struct ac {
    int s, t, pwr, cst;
};

ac a[105];
int n, m, money, ans;
vector<int> req(105), cur(105);

bool check() {
    for (int i = 1; i <= 105; i++)
        if (cur[i] > 0)
            return false;
    return true;
}

void fill(int idx) {
    for (int i = a[idx].s; i <= a[idx].t; i++)
        cur[i] -= a[idx].pwr;
    money += a[idx].cst;
}

void unfill(int idx) {
    for (int i = a[idx].s; i <= a[idx].t; i++)
        cur[i] += a[idx].pwr;
    money -= a[idx].cst;
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
    
    int s, t, c;
    for (int i = 0; i < n; i++) {
        cin >> s >> t >> c;
        
        for (int i = s; i <= t; i++)  
            req[i] += c, cur[i] += c;
    }
    
    for (int i = 0; i < m; i++)
        cin >> a[i].s >> a[i].t >> a[i].pwr >> a[i].cst;
        
    ans = INT_MAX;
    for (int i = 0; i < m; i++) {
        money = 0;
        cur = req;
        Try(i);
    }
      
    cout << ans;
    return 0;
}