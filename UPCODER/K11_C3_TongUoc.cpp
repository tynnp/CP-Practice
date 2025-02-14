#include <iostream>
using namespace std;

int main() {
    int n, res = 0;
    cin >> n;

    if (n < 0) n = -n;

    for (int i = 1; i <= n; i++)
        if (n % i == 0) res += i;

    cout << res;
    return 0;
}