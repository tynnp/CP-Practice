#include <iostream>
#include <cmath>
using namespace std;

int main() {
    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);
    
    int x, y;
    cin >> x >> y;
    
    int cur = x, next;
    int step = 0, ans = 0;
    
    while (true) {
        next = x + pow(-2, step);
        
        if ((cur <= y && y <= next) || (cur >= y && y >= next)) {
            ans += abs(y - cur);
            break;
        }
        
        ans += abs(cur - next);
        cur = next;
        step++;
    }
    
    cout << ans;
    return 0;
}
