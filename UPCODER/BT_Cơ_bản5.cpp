#include <bits/stdc++.h>
using namespace std;

double cal(int n) {
    if (n == 1)
        return 1;
    return sqrt(n + cal(n - 1));
}

int main() {
    int n;
    cin >> n;
    cout << setprecision(6) << cal(n);
    return 0;
}