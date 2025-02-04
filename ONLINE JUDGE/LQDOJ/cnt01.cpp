#include <iostream>
using namespace std;

#define int long long
#define MAXN 1000005

int n, a[MAXN], cnt[MAXN];

int32_t main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
    }

    for (int i = 1; i <= n; i++) 
        cout << a[i] << ' ' << cnt[a[i]] << '\n';
    
    return 0;
}