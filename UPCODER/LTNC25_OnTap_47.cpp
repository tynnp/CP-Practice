#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[101], cmb[101];

void Try(int s, int cnt) {
    if (cnt == k) {
        cout << "(";
        
        for (int i = 0; i < k; i++) {
            if (i > 0) 
                cout << " ";
            cout << cmb[i];
        }
            
        cout << ")\n";
        return;
    }
    
    for (int i = s; i < n; i++) {
        cmb[cnt] = a[i];
        Try(i + 1, cnt + 1);
    }
}

int main() {
    cin >> n >> k;
    
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    Try(0, 0);
    return 0;
}