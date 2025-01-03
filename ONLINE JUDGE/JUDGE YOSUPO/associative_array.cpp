#include <iostream>
#include <map>
using namespace std;

long long n, t, k, v;
map<long long, long long> m;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    while (n--) {
        cin >> t;

        if (t == 1) {
            cin >> k;
            cout << m[k] << '\n';
        }

        if (t == 0) {
            cin >> k >> v;
            m[k] = v;
        }
    }

    return 0;
}