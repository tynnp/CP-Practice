#include <bits/stdc++.h>
using namespace std;

int sum(int n) {
    int res = 0;

    while (n > 0) {
        res += n % 10;
        n /= 10;
    }

    return res;
}

bool soDep(int n) {
    return n > 0 && n % 2 == 0 && sum(n) % 9 == 0;
}

int n, cnt, x = 18;

int main() {
    cin >> n;

    while (true) {
        if (soDep(x)) {
            cnt++;

            if (cnt == n) {
                cout << x << endl;
                break;
            }
        }

        x += 18;
    }

    return 0;
}