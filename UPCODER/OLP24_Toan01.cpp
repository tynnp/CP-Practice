#include <bits/stdc++.h>
using namespace std;

int main() {
    int64_t n, res[] = {3, 5, 9, 7};
    cin >> n;
    cout << (n == 0 ? 2 : res[(n - 1) % 4]);
    return 0;
}