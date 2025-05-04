//1. Xem công thức hướng dẫn và bài này có chia dư.
#include <iostream>
using namespace std;

#define ll long long
const int MOD = 1e9 + 7;

ll mul(ll a, ll b, ll c) {
    a %= c;
    ll res = 0;
    
    while (b) {
        if (b & 1)
            res = (res + a) % c;
        a = (a << 1) % c;
        b >>= 1;
    }
    
    return res;
}

ll pow(ll a, ll b, ll c) {
    a %= c;
    ll res = 1;
    
    while (b) {
        if (b & 1)
            res = mul(res, a, c);
        a = mul(a, a, c);
        b >>= 1;
    }
    
    return res;
}

int main() {
    ll a, b;
    cin >> a >> b;
    cout << pow(a, b, MOD);
    return 0;
}