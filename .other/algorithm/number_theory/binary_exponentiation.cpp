/*********************************************************************************************************** 
 * Yêu cầu: Tính a^b % c với a, b <= 10^100 và c <= 10^18
 * Giải với chuỗi: a^b = (((a^b1)^10 x a^b2)^10 x a^b3)...
 *  Cài đặt hàm nhân nhị phân a x b mod c
 *  Cài đặt hàm lũy thừa nhị phân a ^ b mod c
 *  Cài đặt hàm mod cho string
 *  Cài đặt hàm lũy thừa nhị phân a ^ b mod c với a, b kiểu string
***********************************************************************************************************/
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

int64_t binary_pow(string a_str, string b, int64_t c) {
    int64_t res = 1;
    int64_t a = mod_string(a_str, c);
    
    for (char ch : b) {
        res = binary_pow(res, 10, c);
        res = binary_mul(res, binary_pow(a, ch - '0', c), c);
    }
    
    return res;
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int64_t c;
    string a, b;
    cin >> a >> b >> c;
    cout << binary_pow(a, b, c);
    return 0;
}