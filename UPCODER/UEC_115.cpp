#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double p, r, t;
    int n;
    long long s;
    cin >> p >> r >> t >> n >> s;

    double ans = p;
    
    for (int i = 0; i < n; ++i) {
        ans = ans * (1 + r / 100.0) + t * 12;
    
        if (ans > s) 
            ans *= 0.9; 
    }

    cout << fixed << setprecision(2) << ans;
    return 0;
}
