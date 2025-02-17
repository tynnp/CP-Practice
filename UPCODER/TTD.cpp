#include <iostream>
using namespace std;

int main() {
    int64_t n, x, h, k;
    int64_t a[100007], sum[100007];

    cin >> n;
    for (int i = 1; i <= n; i++) 
        cin >> a[i];
    
    sum[0] = 0;
    for (int i = 1; i <= n; i++) 
        sum[i] = sum[i - 1] + a[i];
    
    cin >> x;
    for (int i = 1; i <= x; i++) {
        cin >> h >> k;
        cout << sum[k] - sum[h - 1] << endl;
    }

    return 0;
}