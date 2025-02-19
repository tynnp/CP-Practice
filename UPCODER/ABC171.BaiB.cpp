#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int a[n], res = 0;
    for (int &x : a) cin >> x;

    sort(a, a + n);
    for (int i = 0; i < k; i++) 
        res += a[i];

    cout << res;
    return 0;
}