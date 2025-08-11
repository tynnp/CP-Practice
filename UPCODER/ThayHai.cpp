#include <iostream>
using namespace std;

int cnt(int n) {
    int res = 0;
    
    while (n != 0) {
        if (n % 10 == 1) res++;
        n /= 10;
    }
    
    return res;
}

int main() {
    long long n, ans = 0;
    cin >> n;
    
    for (int i = 1; i <= n; i++)
        if (cnt(i) > 0) ans++;
    
    ans *= 1000000;
    cout << ans;
    return 0;
}