#include <bits/stdc++.h>
using namespace std;

double S(int n) {
    if (n == 1) return 1.0 / (1 * 2);  
    return 1.0 / (n * (n + 1)) + S(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(3) << S(n);
    return 0;
}
