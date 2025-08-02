#include <iostream>
#include <algorithm>
using namespace std;

string s, t;

int main() {
    freopen("censor.in", "r", stdin);
    freopen("censor.out", "w", stdout);

    cin.tie(0) -> sync_with_stdio(0);
    cin >> s >> t;

    size_t pos = s.find(t);
    size_t len = t.size();

    while (pos != string::npos) {
        s.erase(pos, len);
        pos = s.find(t, max(0, int(pos - len)));
    }

    cout << s;
    return 0;
}
