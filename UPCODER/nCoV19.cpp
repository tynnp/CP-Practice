#include <iostream>
using namespace std;
 
int main() {
    int a[7];
    for (int i = 0; i < 7; i++) 
        cin >> a[i];

    int64_t h, k; 
    cin >> h >> k;
    double x = 1, res = 10, tuan = 0;

    for (int i = 0; i < 7; i++) {
        if (a[i] >= h) x /= 2;
        else x *= 4;
    }

    if (x <= 1) cout << -1;
    else {
        while (res < k) 
            res *= x, tuan++;
        cout << tuan;
    }

    return 0;
}