#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, k; 
    cin >> k >> n;
    int len = 0, tmp = n;

    while (tmp > 0)
        len++, tmp /= 10;

    if (k < len && k >= 0) cout << n/int(pow(10, len-k-1)) % 10;
    else cout << -1;
    return 0;
}