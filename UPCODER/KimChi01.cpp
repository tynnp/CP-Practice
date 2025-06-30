#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6 + 5;
int n, x;
bool p[MAXN];

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    
    memset(p, true, sizeof(p));
    p[0] = p[1] = false;

    for (int i = 2; i*i <= MAXN; i++) {
        if (p[i]) {
            for (int j = i * i; j < MAXN; j += i)
                p[j] = false;
        }
    }

    while (n--) {
        cin >> x;
        cout << (p[x - 1] || p[x] || p[x + 1]) << '\n';
    }

    return 0;
}