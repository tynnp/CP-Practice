#include <bits/stdc++.h>
using namespace std;

int n, a[100], b[100];
bool used[100];

void Try(int idx) {
    if (idx == n) {
        cout << "(";
        for (int i = 0; i < n; i++) {
            if (i > 0) cout << " ";
            cout << b[i];
        }
        cout << ")\n";
        return;
    }

    for (int i = 0; i < n; i++) {
        if (used[i]) 
            continue;
            
        if (i > 0 && a[i] == a[i - 1] && !used[i - 1]) 
            continue;

        used[i] = true;
        b[idx] = a[i];
        
        Try(idx + 1);
        
        used[i] = false;
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    
    sort(a, a + n); 
    Try(0);
    
    return 0;
}
