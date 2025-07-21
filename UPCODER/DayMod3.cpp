#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n;
    
    vector<int> v(n);
    for (int &x : v) cin >> x;
    cin >> k;
    
    sort(v.begin(), v.end(), [] (int a, int b) {
        int a_mod = a % 3, b_mod = b % 3;
        if (a_mod == 0) a_mod = 3;
        if (b_mod == 0) b_mod = 3;
        if (a_mod != b_mod) return a_mod < b_mod;
        return a < b;
    });
    
    if (k >= n) cout << "Khong Tim Thay";
    else cout << v[k];
    return 0;
}