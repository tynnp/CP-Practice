#include <bits/stdc++.h>
using namespace std;

int xk, yk, xp, yp;
int dx[] = {2, 2, -2, -2, 1, 1, -1, -1};
int dy[] = {1, -1, 1, -1, 2, -2, 2, -2};

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> xk >> yk >> xp >> yp;

    for (int i = 0; i < 8; i++) {
        int x = xk + dx[i];
        int y = yk + dy[i];

        if (x == xp && y == yp) {
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";
    return 0;
}