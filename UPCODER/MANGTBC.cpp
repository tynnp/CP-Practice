#include <iostream>
#include <vector>
using namespace std;

const int MAXN = 1e6 + 5;
int64_t n, a[MAXN], res[MAXN];

int main() {
    cin >> n;
    for (int64_t &x : a) cin >> x;

    res[0] = 0;
    for (int i = 1; i < n; i++)
        res[i] = res[i - 1] + a[i - 1];
    res[n] = res[n - 1] + a[n - 1];

    for (int i = 1; i <= n; i++)
        res[i] = res[i] / i;

    for (int i = 1; i <= n; i++)
        cout << res[i] << " ";

    return 0;
}