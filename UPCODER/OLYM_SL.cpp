#include <bits/stdc++.h>
using namespace std;

int n, ans, cnt;
int a[10001];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int i = 0, j = 0;

    while (j < n) {
        cnt += a[j] < 0;

        while (cnt > 2 && i < j) 
            cnt -= a[i] < 0, i++;
        
        ans = max(ans, j - i + 1);
        j++;
    }
    
    cout << ans;
    return 0;
}