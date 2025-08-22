#include <iostream>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        int n, k, res = -10e5;
        int checkEven = 0;
        cin >> n >> k;

        while (n--) {
            int tmp; cin >> tmp;
            res = max(res, tmp % k);
            if (tmp % 2 == 0) checkEven++;
            if (tmp % k == 0) res = k;
        }

        if (k == 4) {
            if (checkEven >= 2 || res == k) cout << 0 << endl;
            else if (checkEven == 1) cout << 1 << endl;
            else cout << min(k - res, 2) << endl;
        } else cout << k - res << endl;
    }

    return 0;
}