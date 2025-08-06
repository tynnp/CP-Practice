#include <iostream>
using namespace std;

int main() {
    int a[100], x, n = 0;

    while (cin >> x && x != -1) {
        a[n] = x;
        n += 1;
    } 

    int ans = 0;
    for (int i = 0; i < n; i++) 
        if (a[i] % 2 != 0) 
            ans += a[i];

    cout << ans;
    return 0;
}