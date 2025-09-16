#include <bits/stdc++.h>
using namespace std;

int n, a[1000];
int l, r, ans, cnt;

int main() {    
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    cnt = 1;
    for (int i = 1; i < n; i++) {        
        if (a[i - 1] != a[i]) {
            cnt++;
            continue;
        }
            
        if (cnt > ans) {
            ans = cnt;
            l = i - cnt;
            r = i;
        }
            
        cnt = 1;
    }
    
    if (cnt >= ans) {
        ans = cnt;
        l = n - cnt;
        r = n;
    }
    
    cout << ans << '\n';
    for(int i = l; i < r; i++) 
        cout << a[i] << ' ';

    return 0;
}
