#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[1000];
set<int> s;

int main() {
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s.insert(a[i] % k);
    }

    cout << s.size();
    return 0;
}