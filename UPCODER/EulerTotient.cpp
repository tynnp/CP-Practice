#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6 + 5;

int t, n;
int p[MAXN];

int main() {
    cin.tie(0) -> sync_with_stdio(0);

    for (int i = 1; i < MAXN; i++)
        p[i] = i;

    for (int i = 2; i < MAXN; i++) 
        if (p[i] == i) 
            for (int j = i; j < MAXN; j += i)
                p[j] = p[j] - p[j] / i;
        
    cin >> t;
    while (t--) {
        cin >> n;
        cout << p[n] << endl;
    }
    
    return 0;
}