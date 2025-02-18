#include <bits/stdc++.h>
using namespace std;

int cal(int n) {
    int res = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0)
            res += i;
    return res;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << (a == cal(b) && b == cal(a) ? "YES" : "NO");
    return 0;
}