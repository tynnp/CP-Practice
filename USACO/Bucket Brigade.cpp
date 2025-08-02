#include <iostream>
#include <cmath>
using namespace std;

int main() {
    freopen("buckets.in", "r", stdin);
    freopen("buckets.out", "w", stdout);

    char c[10][10];
    int xB, yB, xR, yR, xL, yL;

    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            cin >> c[i][j];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (c[i][j] == 'B') 
                xB = i, yB = j;

            if (c[i][j] == 'L')
                xL = i, yL = j;

            if (c[i][j] == 'R')
                xR = i, yR = j;
        }
    }

    int ans = abs(xL - xB) + abs(yL - yB) - 1;

    if ((xB == xL && xB == xR) && ((yB < yR && yR < yL) || (yB > yR && yR > yL)))
        ans += 2;
    
    if ((yB == yL && yB == yR) && ((xB < xR && xR < xL) || (xB > xR && xR > xL)))
        ans += 2;

    cout << ans;
    return 0;
}