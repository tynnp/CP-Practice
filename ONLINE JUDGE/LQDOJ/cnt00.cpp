#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, cnt = 0;
    cin >> n >> x;
    
    while (n--) {
        int v;
        cin >> v;
        cnt += (v == x);
    }

    cout << cnt;
    return 0;
}