#include <bits/stdc++.h>
using namespace std;

#define int int64_t
int a, b, c;

int mul(int a, int b, int c) {
    a %= c;
    int res = 0;

    while (b) {
        if (b & 1) 
            res = (res + a) % c;
        a = (a << 1) % c;
        b >>= 1;
    }

    return res;
}

int pow(int a, int b, int c) {
    a %= c;
    int res = 1;
    
    while (b) {
        if (b & 1)
            res = mul(res, a, c);
        a = mul(a, a, c);
        b >>= 1;
    }

    return res;
} 

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> a >> b >> c;
    cout << pow(a, b, c);
    return 0;
}
