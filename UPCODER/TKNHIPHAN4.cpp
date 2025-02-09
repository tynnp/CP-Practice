#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6 + 5;

int n, l, r;
int MAX, MIN;
int a[MAXN];

void query(int l, int r, int &MIN, int &MAX) {
    int min1, max1, min2, max2;

    if (l == r) {
        MAX = MIN = a[l];
        return;
    }

    query(l, (l + r) >> 1, min1, max1);
    query(((l + r) >> 1) + 1, r, min2, max2);
    
    MIN = min(min1, min2);
    MAX = max(max1, max2);
}

int main() {
    cin >> n >> l >> r;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    query(l, r, MIN, MAX);
    cout << MIN << " " << MAX;
    return 0;
}