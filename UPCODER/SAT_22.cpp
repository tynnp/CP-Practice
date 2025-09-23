#include <bits/stdc++.h>
using namespace std;

int n, a[1000];
int cnt, f[105];

int main() {
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        f[a[i]]++;
    }
        
    for (int i = 0; i < 105; i++) 
        cnt = max(cnt, f[i]);
        
    for (int i = 0; i < 105; i++) {
        if (f[i] == cnt) {
            cout << i;
            break;
        }
    }
    
    return 0;
}