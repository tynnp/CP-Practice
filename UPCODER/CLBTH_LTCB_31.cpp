#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
        
    int ans = 0;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] + a[j] == x)
                    ans++;
    
    cout << ans;
    return 0;
}