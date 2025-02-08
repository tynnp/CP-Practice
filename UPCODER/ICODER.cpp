#include <bits/stdc++.h>
using namespace std;
const int MOD = 65536;

string s;
int n, x;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
     
    while (cin >> n && n != 0) {
        int r = 1;

        while (n--) {
            cin >> s >> x;

            if (s == "MUL")
                r = (r * x) % MOD;
        }

        cout << MOD / __gcd(r, MOD) << endl;
    }
    
    return 0;
}