#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n; 
    cin >> n;

    int k, idx, arr[n]; 
    cin >> k;

    for (int i = 0; i < n; i++) 
        cin >> arr[i];

    for (int i = 0; i < n; i++) {
        if (arr[i] > k) {
            idx = i; 
            break;
        }
    } 

    cout << idx + 1 << endl;
    for (int i = 0; i < idx; i++) 
        cout << arr[i] << " ";

    cout << k << " ";
    for (int i = idx; i < n; i++) 
        cout << arr[i] << " ";

    return 0;
}