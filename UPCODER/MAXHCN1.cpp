#include <bits/stdc++.h>
using namespace std;

int n, m, ans;
const int MAXN = 20 + 5;
int c[MAXN][MAXN];

bool check(int top, int left, int bottom, int right) {
    for (int i = top; i <= bottom; i++) 
        for (int j = left; j <= right; j++)
            if (!c[i][j])   
                return false;
                
    return true;
}

int Try(int top, int left, int bottom, int right) {
    if (top > bottom || left > right)
        return 0;

    if (check(top, left, bottom, right))
        return (bottom - top + 1) * (right - left + 1);

    int res = 0;

    for (int i = top; i <= bottom; i++) {
        for (int j = left; j <= right; j++) {
            if (!c[i][j]) {
                res = max(res, Try(top, left, i - 1, right));
                res = max(res, Try(i + 1, left, bottom, right));
                res = max(res, Try(top, j + 1, bottom, right));
                res = max(res, Try(top, left, bottom, j - 1));
                return res;
            }
        }
    }

    return res;
}

int main() {
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> c[i][j];

    ans = Try(1, 1, n, m);
    cout << ans;
    return 0;
}