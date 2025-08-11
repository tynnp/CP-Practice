#include <bits/stdc++.h>
using namespace std;

int daoNguoc(int n) {
    int res = 0;
    while (n) 
        res = res * 10 + n % 10,
        n /= 10;
    return res;
}

int gcd(int a, int b) {
    if (!b) return a;
    return gcd(b, a % b);
}

bool checkBB(int a) {
    return gcd(a, daoNguoc(a)) == 1;
}
 
int main() {
    int n; 
    cin >> n;
    cout << (checkBB(n) ? "YES" : "NO");
    return 0;
}