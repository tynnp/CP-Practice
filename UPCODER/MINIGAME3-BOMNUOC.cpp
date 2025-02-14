#include <iostream>
using namespace std;
 
int main() {
    int n, t, k = 0; 
    bool check = true;
    cin >> n >> t;

    int a[n];
    for (int &x : a) cin >> x;

    while (t > 0) {
        if (k == n && t > 0) {
            cout << -1;
            check = false;
            break;
        }

        t -= a[k++];
    }

    if (check) cout << k+1;
    return 0;
}