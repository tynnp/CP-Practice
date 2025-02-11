#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];

    if (n == 0) cout << "NULL";
    else {
        for (int &x : a) cin >> x;
        for (int i = n-1; i >= 0; i--) {
            cout << a[i];
            if (i != 0) cout << " ";
        }
    }

    return 0;
}