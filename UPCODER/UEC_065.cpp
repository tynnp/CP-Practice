#include <iostream>
#include <cmath>
using namespace std;

bool shh(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0)
            sum += i;
    return sum == n;
}

bool snt(int n) {
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return n > 1;
}

bool socp(int n) {
    int k = sqrt(n);
    return k * k == n;
}

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
        if (shh(i))
            cout << i << ' ';
    cout << endl;

    for (int i = 1; i <= n; i++)
        if (snt(i))
            cout << i << ' ';
    cout << endl;

    for (int i = 1; i <= n; i++)
        if (socp(i))
            cout << i << ' ';

    return 0;
}