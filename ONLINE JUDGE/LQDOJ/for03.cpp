#include <bits/stdc++.h>
using namespace std;

int n;
set<int> v;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    for (int i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            v.insert(i);
            if (i != n/i)
                v.insert(n/i);
        }
    }

    for (int x : v) 
        cout << x << ' ';

    return 0;
}
