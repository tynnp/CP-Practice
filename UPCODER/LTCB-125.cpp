#include <iostream>
using namespace std;

bool check(int n) {
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) return false;
    return n > 1 && n < 100; 
}

int main() {
    int n;
    cin >> n;

    int a[n], cnt = 0;
    for (int &x : a) cin >> x;

    for (int x : a) 
        if (check(x)) cnt++;

    cout << cnt;
    return 0;
}