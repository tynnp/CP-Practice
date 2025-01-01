#include <iostream>
using namespace std;

int k, n, ans;
int c[25][25];
int a[25];

int main() {
    freopen("gymnastics.in", "r", stdin);
    freopen("gymnastics.out", "w", stdout);
    
    cin >> k >> n;

    for (int t = 1; t <= k; t++) {
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        
        for (int i = 1; i <= n; i++)
            for (int j = i + 1; j <= n; j++) 
                c[a[i]][a[j]]++;
    }

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (c[i][j] == k)
                ans++;

    cout << ans;
    return 0;
}