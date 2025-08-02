#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    long long ans = 0;
    long long cnt = n > 0 ? 0 : 1;
    
    while (n) {
        cnt++;
        ans += n % 10;
        n /= 10;
    }
    
    cout << cnt << endl << ans;
}
