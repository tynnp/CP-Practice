#include <bits/stdc++.h>
using namespace std;

int n;
int a[1001], f[1001];

int main() {
    cin >> n;
    fill(f, f + n, 1);

    for (int i = 1; i <= n; i++)
        cin >> a[i];
        
    for (int i = 1; i <= n; i++) 
        for (int j = i-1; j >= 1; j--)
            if (a[j] < a[i] && f[j] >= f[i])
                f[i] = f[j] + 1;
                
    cout << *max_element(f, f + n);
    return 0;
}