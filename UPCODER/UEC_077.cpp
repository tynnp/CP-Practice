#include <iostream>
#include <cmath>
using namespace std;

bool sht(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0)
            sum += i;
    return n > 0 && sum == n;
}

bool snt(int n) {
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return n > 1;
}

bool scp(int n) {
    return (int) sqrt(n) == sqrt(n);
}

int main() {
    int n;
    cin >> n;

    int a[n];
    bool found = false;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++) {
        if (sht(a[i])) {
            found = true;
            cout << a[i] << ' ';
        }
    }
    
    if (!found) cout << -1;
    cout << endl;

    found = false;
    for (int i = 0; i < n; i++) {
        if (snt(a[i])) {
            found = true;
            cout << a[i] << ' ';
        }
    }

    if (!found) cout << -1;
    cout << endl;

    found = false;
    for (int i = 0; i < n; i++) {
        if (scp(a[i])) {
            cout << a[i] << ' ';
            found = true;
        }
    }
    
    if (!found) cout << -1;
    return 0;
}