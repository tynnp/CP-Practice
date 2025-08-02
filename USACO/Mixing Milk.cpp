#include <iostream>
#include <algorithm>
using namespace std;

int c[3], m[3];

int main() {
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);

    for (int i = 0; i < 3; i++)
        cin >> c[i] >> m[i];
    
    for (int i = 0; i < 100; i++) {
        int x = i % 3;
        int y = (i + 1) % 3;
        
        int k = min(m[x], c[y] - m[y]);
        m[y] += k;
        m[x] -= k;
    }
    
    cout << m[0] << '\n' << m[1] << '\n' << m[2];
    return 0;
}
