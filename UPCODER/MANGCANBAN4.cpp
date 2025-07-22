#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long a[n];

    for (long long &x : a) cin >> x;
    for (long long x : a) cout << x << " ";

    for (int i = n-1; i >= 0; i--) {
        if (i == n-1) cout << endl;
        cout << a[i] << " ";
    }
    
    return 0;
}