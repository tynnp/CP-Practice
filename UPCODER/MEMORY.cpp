#include <bits/stdc++.h>
using namespace std;

int n, k, cnt = 1;
const int MAXN = 1e6 + 5;
int a[MAXN];

int main() {
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
        cin >> a[i];
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (cnt == k) {
                cout << a[j];
                return 0;
            }
            cnt++;
        }
    }

    return 0;
}