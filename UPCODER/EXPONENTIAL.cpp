#include <iostream>
using namespace std;

#define int long long
#define MOD 100

int mul(int a, int b) {
    int res = 0;
    a %= MOD;

    while (b > 0) {
        if (b & 1) 
            res = (res + a) % MOD;
        a = (a + a) % MOD;
        b /= 2;
    }

    return res;
}

int pow(int a, int b) {
    int res = 1;
    a %= MOD;

    while (b > 0) {
        if (b & 1)
            res = mul(res, a);
        a = mul(a, a);
        b /= 2;
    }

    return res;
}

int32_t main() {
    int a, b;
    cin >> a >> b;
    int ans = pow(a, b);

    if (ans < 10) 
        cout << 0;
    cout << ans;
    return 0;
}