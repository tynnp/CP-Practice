#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    freopen("herding.in", "r", stdin);
    freopen("herding.out", "w", stdout);

    int a[3];
    for (int &x : a) cin >> x;
    
    sort(a, a + 3);
    int x = a[0], y = a[1], z = a[2];
    int minVal = 0, maxVal = 0;
    
    if (z - x == 2 && z - y == 1)
        minVal = 0;
    else if (z - y == 2 || y - z == 2)
        minVal = 1;
    else 
        minVal = 2;
        
    maxVal = max(z - y, y - x) - 1;
    cout << minVal << '\n' << maxVal;
    return 0;
}
