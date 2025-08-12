#include <iostream>
using namespace std;

int tongcs(int n) {
    int res = 0;
    
    while (n != 0) {
        res += n % 10;
        n /= 10;
    }
    
    return res;
}

int main() {
    const int MAXN = 1e3;
    int a[MAXN], n, m = 1;
    cin >> n;
    
    a[0] = 4, a[1] = 7;
    for (int i = 0; 2*i + 3 < MAXN; i++) {
        a[2 * i + 2] = a[i] * 10 + 4;
        a[2 * i + 3] = a[i] * 10 + 7;
    }
    
    int ans = 999999999;
    for (int i = 0; i < MAXN; i++) 
        if (tongcs(a[i]) == n)
            ans = min(ans, a[i]);
    
    cout << (ans == 999999999 ? -1 : ans);
    return 0;
}