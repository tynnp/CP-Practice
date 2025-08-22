#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a[6], res = 0;
    bool check = false;

    for (double &x : a) {
        cin >> x;
        if (x < 0 || x > 10) check = true;
        res += x;
    }

    if (check) cout << -1;
    else cout << fixed << setprecision(2) << res/6.0;
    return 0;
}