#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
int a, b, m, n;
int x[MAXN], ans;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> a >> b >> m >> n;
    
    fill(x, x + MAXN, 1);
    x[0] = x[1] = 0;
    
    for (int i = 2; i*i <= MAXN; i++) 
        if (x[i])   
            for (int j = i*i; j <= MAXN; j += i)
                x[j] = 0;
    
    for (int i = a; i <= b; i++) 
        if (x[i] && i % m == n)
            ans += i;
    
    cout << ans;
    return 0;
}