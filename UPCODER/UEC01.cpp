#include <bits/stdc++.h>
using namespace std;

int64_t binary_mul(int64_t a, int64_t b, int64_t c) {
    int64_t res = 0;
    a %= c;
    
    while (b) {
        if (b & 1) 
            res = (res + a) % c;
        a = (a << 1) % c;
        b >>= 1;
    }
    
    return res;
}

int64_t binary_pow(int64_t a, int64_t b, int64_t c) {
    int64_t res = 1;
    a %= c;
    
    while (b) {
        if (b & 1) 
            res = binary_mul(res, a, c);
        a = binary_mul(a, a, c);
        b >>= 1;
    }
    
    return res;
}

int64_t mod_string(string n, int64_t m) {
    int64_t res = 0;
    for (char c : n) 
        res = (res * 10 + (c - '0')) % m;
    return res;
}

string div_by_2(string n) {
    string res;
    int d, car = 0;
    
    for (char c : n) {
        d = car * 10 + (c - '0');
        res.push_back((d / 2) + '0');
        car = d % 2;
    }
    
    while (res.size() > 1 && res[0] == '0')
        res.erase(res.begin());
    return res;
}

int64_t binary_pow_big(string a_str, string b, int64_t c) {
    int64_t res = 1;
    int64_t a = mod_string(a_str, c);
    
    while (b != "0") {
        if ((b.back() - '0') & 1)
            res = binary_mul(res, a, c);
        a = binary_mul(a, a, c);
        b = div_by_2(b);
    }
    
    return res;
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int64_t c;
    string a, b;
    cin >> a >> b >> c;
    cout << binary_pow_big(a, b, c);
    return 0;
}