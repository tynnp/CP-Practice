#include <bits/stdc++.h>
using namespace std;

const int MIN_BASE = 10;
const int MAX_BASE = 15'000;

int t, cur, y;
string a, b;

int toBase10(int b, string n) {
    return (n[0] - '0') * b * b + (n[1] - '0') * b + (n[2] - '0');
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> t;
    
    while (t--) {
        cin >> a >> b;

        y = MIN_BASE;
        for (int x = MIN_BASE; x <= MAX_BASE; x++) {
            cur = toBase10(x, a);

            while (toBase10(y, b) < cur) y++;

            if (y <= MAX_BASE && toBase10(y, b) == cur) {
                cout << x << ' ' << y << '\n';
                break;
            }
        } 
    }

    return 0;
}