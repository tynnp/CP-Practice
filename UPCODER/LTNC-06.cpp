#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    
    vector<int> v(n + 1);
    v[1] = v[2] = v[3] = 1;
    
    for (int i = 1; i <= n; i++) {
        if (i >= 4)
            v[i] = v[i-1] + v[i-2] + v[i-3];
        ans += v[i];
    }
    
    cout << ans;
    return 0;
}