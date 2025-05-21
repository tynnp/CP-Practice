#include <bits/stdc++.h>
using namespace std;

int n, a[101];
 
int Try(int idx, int sumA, int sumB) {
    if (idx == n)
        return abs(sumA - sumB);
    
    int x = Try(idx + 1, sumA + a[idx], sumB);
    int y = Try(idx + 1, sumA, sumB + a[idx]);
 
    return min(x, y);
}
 
int main() {
    cin >> n;
 
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    cout << Try(0, 0, 0);
    return 0;
}