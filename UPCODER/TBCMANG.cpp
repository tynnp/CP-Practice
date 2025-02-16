#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n], cnt = 0, res = 0;
    for (int &x : a) cin >> x;

    for (int x : a)         
        if (x % 2 != 0) res += x, cnt++;
    
    cout << fixed << setprecision(1) << (double) res/cnt;
    return 0;
}