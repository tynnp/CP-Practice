#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> v;

int main() {
    freopen("CONNECT.INP", "r", stdin);
    freopen("CONNECT.OUT", "w", stdout);

    cin >> n;
    v.resize(n);
    for (int &x : v) cin >> x;

    sort(v.begin(), v.end(), [] (int a, int b) {
        return to_string(a) + to_string(b) > to_string(b) + to_string(a);
    });

    for (int x : v) cout << x;
    return 0;
}