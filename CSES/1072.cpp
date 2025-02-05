#include <iostream>
using namespace std;

long long solve(int n) {
    long long m = n*n;
    long long k = m * (m - 1) / 2;
    long long ans = k - 4 * (n - 2) * (n - 1);
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) 
        cout << solve(i) << "\n";

    return 0;
}