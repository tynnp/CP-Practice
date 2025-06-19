#include <iostream>
using namespace std;

int t, d, n, p, q, z;
int a[1024][1024], k = -1;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> t;
    
    while (t--) {
        for (int i = 0; i < 1024; i++)
            for (int j = 0; j < 1024; j++)
                a[i][j] = 0;

        cin >> d >> n;
        for (int i = 0; i < n; i++) {
            cin >> p >> q >> z;

            for (int a = p - d; a <= p + d; a++) {
                if (a < 0 || a > 1023) continue;

                for (int b = q - d; b <= q + d; b++) {
                    if (b < 0 || b > 1023) continue;
                    a[a][b] += z;
                }
            }
        }

        for (int i = 0; i < 1024; i++)
            for (int j = 0; j < 1024; j++)
                if (a[i][j] > k) 
                    p = i, q = j, k = a[i][j];
        
        cout << p << " " << q << " " << k;
    }

    return 0;
}