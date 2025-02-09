#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m, res = 0;
    cin >> n >> m;

    int a[n];
    for (int &x : a) cin >> x;
    
    sort(a, a + n);
    for (int i = 0; i < m; i++)
        if (a[i] < 0) res += -a[i];
    
    cout << res;
    return 0;
}