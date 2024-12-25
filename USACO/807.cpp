#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("teleport.in", "r", stdin);
    freopen("teleport.out", "w", stdout);

    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int A = min(a, b);
    int B = max(a, b);
    int X = min(x, y);
    int Y = max(x, y);

    int k = abs(A - X) + abs(B - Y);

    if (k < B - A)
        cout << k;
    else 
        cout << B - A;

    return 0;
}