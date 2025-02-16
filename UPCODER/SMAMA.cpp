#include <iostream>
using namespace std;

int main() {
    string ans = "";
    int64_t n;
    cin >> n;

    while (n > 0) {
        if (n & 1) 
            ans = '4' + ans;
        else 
            n -= 2, ans = '7' + ans;
        n >>= 1;
    }

    cout << ans;
    return 0;
}