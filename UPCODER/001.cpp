#include <iostream>
using namespace std;
 
// KiemTraNguyenTo
bool checkNT(int n) {
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) 
            return false;
    return n > 1;
}

int main() {
    int n; 
    cin >> n; 
    int a[n];
    for (int &x : a) cin >> x;
    bool check = false;

    for (int x : a) {
        if (checkNT(x)) {
            cout << x << " ";
            check = true;
        }
    }

    if (!check) cout << -1;
    return 0;
}