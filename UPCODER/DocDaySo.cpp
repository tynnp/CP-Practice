#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, sum = 0;
    vector<int> v;

    while (cin >> x) {
        sum += x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());
    cout << v.size() << endl;
    cout << sum << endl;
    for (int x : v) cout << x << ' ';

    return 0;
}