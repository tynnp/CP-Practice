#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
set<int> ans;

void Try(int cnt, int milk1, int milk2, vi fir, vi sec) {
    if (cnt == 5) {
        ans.insert(milk1);
        return;
    }
    
    for (int i = 0; i < 10; i++) {
        int x = fir[i];
        vi newFir = fir, newSec = sec;
        newFir.erase(newFir.begin() + i);
        newSec.push_back(x);
        Try(cnt + 1, milk2 + x, milk1 - x, newSec, newFir);
    }
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    freopen("backforth.in", "r", stdin);
    freopen("backforth.out", "w", stdout);
    vi fir(10), sec(10);
    
    for (int &x : fir)
        cin >> x;
        
    for (int &x : sec)
        cin >> x;
    
    Try(1, 1000, 1000, fir, sec);
    cout << ans.size();
    return 0;
}