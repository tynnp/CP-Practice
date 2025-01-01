#include <iostream>
#include <cmath>
using namespace std;

const int MAXN = 25;
long long n, ans, p[MAXN];

long long Try(int idx, long long sumA, long long sumB) {
    if (idx > n) 
        return abs(sumA - sumB);
    
    long long x = Try(idx + 1, sumA, sumB + p[idx]);
    long long y = Try(idx + 1, sumA + p[idx], sumB);

    return min(x, y);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 1; i <= n; i++)    
        cin >> p[i];

    cout << Try(1, 0LL, 0LL);
    return 0;
}