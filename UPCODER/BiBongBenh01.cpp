#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e7 + 5;
int n, x, ans;
int h[MAXN];

int main() {
    while (cin >> x) 
        h[n++] = x;

    int i = 0, j = n - 1;
    int iMax = 0, jMax = 0;

    while (i <= j) {
        if (h[i] <= h[j]) {
            if (h[i] >= iMax)
                iMax = h[i];
            else 
                ans += iMax - h[i];
            i++;

        } else {
            if (h[j] >= jMax) 
                jMax = h[j];
            else 
                ans += jMax - h[j];
            j--;
        }
    }
    
    cout << ans;
    return 0;
}