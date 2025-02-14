#include <bits/stdc++.h>
using namespace std;

int64_t t, x, ans;
char c;

int main() {
    int idx = 1;
    cin >> t >> c;

    while (t--) {
        cin >> x;

        if (c == 'e' && idx % 2 == 0)
            ans += x;
        
        if (c == 'o' && idx % 2 != 0)
            ans += x;
        
        idx++;
    }

    cout << ans;
    return 0;
}