#include <iostream>
using namespace std;

int main() {
    freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);

    int x, y, m, ans = 0;
    cin >> x >> y >> m;

    for (int i = 0; i <= m/x; i++) 
        for (int j = 0; j <= m/y; j++) 
            if (x*i + y*j <= m)
                ans = max(ans, x*i + y*j);
    
    cout << ans;
    return 0;
}
