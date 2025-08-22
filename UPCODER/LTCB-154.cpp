#include <iostream>
using namespace std;

int main() {
    int n, ans = -1, min = -1; 
    cin >> n; 

    int a[n];
    for (int& x : a) cin >> x;

    for (int i = 0; i < n; i++)
        if (a[i] < min) 
            min = a[i], ans = i;
        
    cout << ans;
    return 0;
}