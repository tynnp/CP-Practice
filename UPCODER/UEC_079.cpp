#include <iostream>
using namespace std;

bool snt(int n) {
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return n > 1;
}

int tongcs(int n) {
    int res = 0;

    while (n != 0) {
        res += n % 10;
        n /= 10;
    }

    return res;
}

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++) {
        if (snt(tongcs(a[i]))) {
            cout << i;
            return 0;
        }
    }

    cout << -1;
    return 0;
}