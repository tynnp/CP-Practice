#include <iostream>
using namespace std;
 
int main() {
    int n, dem = 0; 
    cin >> n;
    int a[n], a2[n]; 

    for (int &x : a) cin >> x;
    for (int i = 1; i < n-1; i++) 
        if (a[i-1]*a[i+1] == a[i])
            a2[dem++] = i+1;

    if (dem > 0) {
        cout << dem << endl;
        for (int i = 0; i < dem; i++) 
            cout << a2[i] << " ";
    } else 
        cout << -1;
        
    return 0;
}