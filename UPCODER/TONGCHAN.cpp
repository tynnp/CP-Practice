#include <bits/stdc++.h>
using namespace std;

int cal(int n) {
    int res = 0;
    while (n) {
        if ((n % 10) % 2 == 0)
            res += n % 10;
        n /= 10;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    cout << cal(n);
    return 0;
}