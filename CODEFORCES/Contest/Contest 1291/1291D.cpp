#include <iostream>
using namespace std;

#define int long long
#define MAXN 200005

int n, q;
string s;
int a[MAXN][26];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> s >> q;
    n = s.size();
    
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 26; j++)
            a[i][j] = a[i-1][j];
        a[i][s[i-1] - 'a']++;
    }
    
    while (q--) {
        int l, r;
        cin >> l >> r;
        
        int k = 0;
        for (int i = 0; i < 26; i++)
            k += a[r][i] - a[l-1][i] > 0;
        
        if (k > 2 || l == r || s[r-1] != s[l-1])
            cout << "Yes\n";
        else 
            cout << "No\n";
    }
    
    return 0;
}