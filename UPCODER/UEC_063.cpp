#include <iostream>
using namespace std;

int tongcs(long long n) {
    int res = 0;
    while (n != 0) {
        res += n % 10;
        n /= 10;
    }
    return res;
}

int main() {
    long long n;
    cin >> n;

    int ans = tongcs(n);
    while (ans >= 10) 
        ans = tongcs(ans);
    
    cout << ans;
    return 0;
}