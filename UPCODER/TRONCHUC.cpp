#include <bits/stdc++.h>
using namespace std;

int main() {
    int64_t n;
    cin >> n;

    int x = n % 10;

    if (x < 5) n -= x;
    else n += 10 - x;

    cout << n;
    return 0;
}