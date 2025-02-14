#include <bits/stdc++.h>
using namespace std;
const int MAXN = 3000 + 5;

int n;
vector<int> ans;

bool prime(int n) {
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) 
            return false;
    return n > 1;
}

int main() {
    cin >> n;
    
    for (int i = 2; i <= n; ++i) {
        int cnt = 0;
        
        for (int j = 2; j <= i; ++j) {
            if (i % j == 0 && prime(j)) {
                cnt++;
                if (cnt > 2) break;
            }
        }
        
        if (cnt == 2) 
            ans.push_back(i);
    }

    cout << ans.size() << endl;
    for (int x : ans) cout << x << " ";
    return 0;
}