#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n;
    int a[n];

    for (int &x : a) cin >> x;

    int k; cin >> k;
    int res = k;

    for (int i = 1; i < n; i++) {
        if (k + a[i-1] >= a[i])
            res += (a[i] - a[i-1]);
        else 
            res += k;
    }

    cout << res;
    return 0;
}