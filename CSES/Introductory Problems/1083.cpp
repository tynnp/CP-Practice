#include <iostream>
using namespace std;

int main() {
    long long n, sum = 0;
    cin >> n;

    for (int i = 1; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
    }

    cout << (n*(n + 1) / 2) - sum;
    return 0;
}