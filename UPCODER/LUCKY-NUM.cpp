#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1005;
int n, x, ans, cnt[MAXN];

int main() {
    freopen("INPUT.txt", "r", stdin);
    freopen("OUTPUT.txt", "w", stdout);
    cin >> n;
    
    while (n--) {
        cin >> x;
        cnt[x]++;
    }
    
    ans = -1;
    for (int i = 1; i <= 1000; i++) 
        if (cnt[i] && cnt[i] == i)
            ans = max(ans, i);
    
    cout << ans;
    return 0;
}