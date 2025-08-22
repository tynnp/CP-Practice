#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n; 

    int a[n];
    for (int &x : a) cin >> x;

    for (int x : a) {
        if (x % 2 == 0) {
            cout << x; return 0;
        }
    }

    cout << -1;
    return 0;
}