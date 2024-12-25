#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);

    bool paint[105];
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    for (int i = 0; i < 105; i++)
        paint[i] = false;

    for (int i = a; i < b; i++)
        paint[i] = true;

    for (int i = c; i < d; i++)
        paint[i] = true;

    int ans = 0;
    for (int i = 0; i < 105; i++)
        ans += paint[i];

    cout << ans;
    return 0;
}