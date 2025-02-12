#include <bits/stdc++.h>
using namespace std;

#define int int64_t

int n, k, x;
set<int> s;

int main() {
    cin >> n >> k;

    while (n--) {
        cin >> x;
        s.insert(x % k);
    }

    cout << s.size();
    return 0;
}

