#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1025;
int t, d, n, p, q, k;
int c[MAXN][MAXN], s[MAXN][MAXN];

int main() {
    cin.tie(0) -> sync_with_stdio(0);

    cin >> t;
    while (t--) {
        cin >> d >> n;
        memset(c, 0, sizeof(c));

        int x, y, z;
        for (int i = 0; i < n; ++i) {
            cin >> x >> y >> z;
            c[x][y] += z;
        }

        for (int i = 0; i < MAXN; ++i) {
            for (int j = 0; j < MAXN; ++j) {
                s[i][j] = c[i][j];

                if (i > 0) 
                    s[i][j] += s[i - 1][j];

                if (j > 0) 
                    s[i][j] += s[i][j - 1];

                if (i > 0 && j > 0)     
                    s[i][j] -= s[i - 1][j - 1];
            }
        }

        p = 0, q = 0, k = 0;
        for (int x = 0; x < MAXN; ++x) {
            for (int y = 0; y < MAXN; ++y) {
                int x1 = max(0, x - d), y1 = max(0, y - d);
                int x2 = min(1024, x + d), y2 = min(1024, y + d);
                int sum = s[x2][y2];

                if (x1 > 0) 
                    sum -= s[x1 - 1][y2];

                if (y1 > 0) 
                    sum -= s[x2][y1 - 1];
                
                if (x1 > 0 && y1 > 0) 
                    sum += s[x1 - 1][y1 - 1];

                if (sum > k || (sum == k && (x < p || (x == p && y < q)))) {
                    k = sum;
                    p = x;
                    q = y;
                }
            }
        }

        cout << p << ' ' << q << ' ' << k << '\n';
    }

    return 0;
}
