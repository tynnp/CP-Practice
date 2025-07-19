#include <iostream>
using namespace std;

bool snt(int n) {
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0)
            return false;
    return n > 1;
}

int main() {
    int a, b, ans = 0;
    cin >> a >> b;
    
    if (a != b) {
        int aa = a * 10 + a;
        int bb = b * 10 + b;
        int ab = a * 10 + b;
        int ba = b * 10 + a;
        
        if (snt(a)) ans += a;
        if (snt(b)) ans += b;
        if (snt(aa)) ans += aa;
        if (snt(bb)) ans += bb;
        if (ab != b && snt(ab)) ans += ab;
        if (ba != a && snt(ba)) ans += ba;
        
    } else {
        int aa = a * 10 + a;
        if (snt(a)) ans += a;
        if (snt(aa)) ans += aa;
    }
    
    cout << ans;
    return 0;
}