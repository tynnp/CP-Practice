#include <iostream>
#include <algorithm>
using namespace std;

int n, m, ans;
int x[101], y[101];

int main() {
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);

    cin >> n >> m;
    
    int len = 1;
    while (n--) {
        int a, b;
        cin >> a >> b;
        
        for (int i = len; i < len + a; i++)
            x[i] = b;
        
        len += a;
    }
    
    len = 1;
    while (m--) {
        int a, b;
        cin >> a >> b;
        
        for (int i = len; i < len + a; i++)
            y[i] = b;
            
        len += a;
    }
    
    for (int i = 1; i <= 100; i++)
        ans = max(ans,  y[i] - x[i]);
    
    cout << ans;
    return 0;
}
