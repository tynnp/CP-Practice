#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> v;

int main() {
    cin >> n;

    if (n == 0) {
        cout << 10;
        return 0;
    }

    if (n == 1) {
        cout << 1;
        return 0;
    }

    while (n > 1) {
        int m = n;

        for (int i = 9; i >= 1; i--) {
            if (n % i == 0) {
                v.push_back(i);
                n /= i;
                break;
            }
        }

        if (n == m) {
            cout << -1;
            return 0;
        }
    }
    
    reverse(v.begin(), v.end());
    for (int x : v) cout << x;  
    return 0;
}