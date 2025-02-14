#include <bits/stdc++.h>
using namespace std;

int a1, b1, c1;
int a2, b2, c2;

int main() {
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;

    if (a1 * b2 != a2 * b1) {
        cout << 1;
        return 0;
    }

    if (a1 * c2 == a2 * c1 && b1 * c2 == b2 * c1)
        cout << -1;
    else    
        cout << 0;
    
    return 0;
}