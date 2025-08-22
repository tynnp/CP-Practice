#include <iostream>
using namespace std;

void lietKe(int a[], int n) {
    bool check = false;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            cout << a[i] << " ";
            check = true;
        }
    }

    if (!check) cout << -1;
 }

int main() {
    int n; 
    cin >> n;    
    
    int a[n]; 
    for (int& x : a) cin >> x;
    lietKe(a, n);
    return 0;
}