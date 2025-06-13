#include <bits/stdc++.h>
using namespace std;

string s;
int t, n, k;
int cap, le, ans;
map<char, int> m;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> t;

    while (t--) {
        m.clear();
        cap = le = ans = 0;
        cin >> n >> k >> s;
    
        for (char c : s) m[c]++;
        for (auto [x, y] : m) {
            cap += y / 2;
            le += y % 2;
        }

        ans = 2 * (cap / k);
        le += 2 * (cap % k);
        ans += le >= k;
        cout << ans << '\n';
    }

    return 0;
}