#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int64_t res = 0, a[n];
    for (int64_t &x : a) cin >> x;

    for (int i = n-1; i >= 0; i--) 
        for (int j = i; j >= 0; j--)
            if (a[i] < a[j]) 
                res += a[j] - a[i];

    cout << res % 1000000000;
    return 0;
}