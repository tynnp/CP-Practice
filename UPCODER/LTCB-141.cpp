#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    double a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int idx = -1;
    double min = 1e18;
    for (int i = 0; i < n; i++) {
        if (min > a[i] && a[i] > 0) {
            idx = i;
            min = a[i];
        }
    }
    
    cout << idx;
    return 0;
}