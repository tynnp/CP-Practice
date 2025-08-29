#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 15 + 5;

int n, sum;
int a[MAXN];
vector<int> duongDi;
vector<vector<int>> ketQua;

void Try(int idx) {
    if (sum != 0 && sum & 1) 
        ketQua.push_back(duongDi);
    
    for (int i = idx + 1; i < n; i++) {
        duongDi.push_back(a[i]);
        sum += a[i];
        
        Try(i);
        
        duongDi.pop_back();
        sum -= a[i];
    }
}

int32_t main() {
    cin >> n;
    
    for (int i = 0; i < n; i++)
        cin >> a[i];
        
    for (int i = 0; i < n; i++) {
        duongDi.push_back(a[i]);
        sum += a[i];
        
        Try(i);
        
        duongDi.pop_back();
        sum -= a[i];
    }
    
    sort(ketQua.begin(), ketQua.end());
    
    if (ketQua.size() == 0) {
        cout << -1;
        return 0;
    }

    for (auto x : ketQua) {
        for (auto y : x)  
            cout << y << " ";
        cout << '\n';
    }
    
    return 0;
}