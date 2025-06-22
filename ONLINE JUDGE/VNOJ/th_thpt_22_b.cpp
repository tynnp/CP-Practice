#include <bits/stdc++.h>
using namespace std;

int64_t n, x, cnt, sum;

int main() {
    freopen("CANDIES.INP", "r", stdin);
    freopen("CANDIES.OUT", "w", stdout);
    
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    
    while (n--) {
        cin >> x;
        if (x != 0 && x % 3 == 0) {
            cnt++;
            sum += (x - 3);
        }
    }
    
    cout << cnt << '\n' << sum / 3;
    return 0;
}