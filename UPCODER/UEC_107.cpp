#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a[n], m[1001] = {0};
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        m[a[i]]++;
    }
    
    int ans = 0;
    for (int i = 0; i <= 1000; i++)
        ans += m[i] > 1;
        
    cout << ans;
    return 0;
}