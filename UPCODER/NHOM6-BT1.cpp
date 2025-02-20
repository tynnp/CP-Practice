#include <iostream>
using namespace std;
 
int main() {
    int n, k; 
    bool check = true;
    cin >> n >> k;

    int a[n]; 
    for (int &x : a) cin >> x;

    int mid, L = 0, R = n-1;
    while(L <= R) {
        mid = (L+R)/2;
        if (a[mid] == k) {
            cout << mid; 
            check = false;
            break;
            
        } else { 
            if (a[mid] < k) L = mid+1;
            else R = mid-1;
        }
    }

    if (check) cout << -1;
    return 0;
}