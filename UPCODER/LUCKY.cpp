#include <bits/stdc++.h>
using namespace std;

#define int int64_t

int32_t main() {
    int k;
    cin >> k;
    
    if(k < 1 || k > 1000000000ULL){
        cout << "SO K KHONG HOP LE";
        return 0;
    }
    
    int d = 0, x = 0; 

    while (true) {
        d++;
        int cnt = 1ULL << d;  
        if (x + cnt >= k) break;
        x += cnt;
    }
    
    int offset = k - x - 1;
    string ans = "";

    for (int i = 0; i < d; i++) {
        int idx = d - 1 - i;

        if (offset & (1ULL << idx))
            ans.push_back('7');
        else
            ans.push_back('4');
    }
    
    cout << ans;
    return 0;
}