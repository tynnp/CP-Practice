#include <iostream>
#include <cmath>
using namespace std;

const int md = 1e6 + 7;
const int mm = 1e7;
int f[10000001];

int main() {
    int t, n, k;
    f[1] = 1;
    
    for (int i = 2; i <= mm; i++)
        f[i] = (1LL * f[i - 1] * 10 + 1) % md;
        
    for (int i = 2; i <= mm; i++)
        f[i] = (f[i] + f[i - 1]) % md;
        
    cin >> t;
    while (t--) {
        cin >> n >> k;
        cout << (1LL * k * f[n]) % md << endl;
    }
    
    return 0;
}