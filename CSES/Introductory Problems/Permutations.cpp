#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    if (n > 1 && n < 4) {
        cout << "NO SOLUTION";
        return 0;
    }

    for (int i = 2; i <= n; i += 2)
        cout << i << ' ';
    
    for (int i = 1; i <= n; i += 2)
        cout << i << ' ';
    
    return 0;
}