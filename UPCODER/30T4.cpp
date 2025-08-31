#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int p = 98510000;
int a, b;

int32_t main() {
    cin >> a >> b;
    cout << p * a << '\n' << p * (a - b);
    return 0;
}