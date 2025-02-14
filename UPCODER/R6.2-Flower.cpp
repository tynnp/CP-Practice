#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5 + 5;

int n, a[MAXN], b[MAXN];
int Mai, Lan, cnt;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        Lan += a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
        Mai += b[i];
    }

    sort(a, a + n);
    sort(b, b + n);

    for (int i = 0; i < n; i++) {
        if (Lan > Mai) {
            cnt++;
            Lan += b[i] - a[n - i - 1];
            Mai += a[n - i - 1] - b[i];
            
        } else {
            cout << cnt;
            break;
        }
    }
    
    return 0;
}