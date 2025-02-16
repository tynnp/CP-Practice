#include <bits/stdc++.h>
using namespace std;

int n, m;
int x, cnt[10];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n * m; i++) {
        cin >> x;
        while (x > 0) {
            cnt[x % 10]++;
            x /= 10;
        }
    }

    for (int i = 1; i < 10; i++)
        if (cnt[i])
            cout << i << " : " << cnt[i] << '\n';
    
    return 0;
}