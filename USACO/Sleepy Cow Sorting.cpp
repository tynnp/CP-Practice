#include <iostream>
using namespace std;

int n, ans;
int p[101];

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    freopen("sleepy.in", "r", stdin);
    freopen("sleepy.out", "w", stdout);
    
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> p[i];
    
    ans = 0;
    for (int i = n-1; i >= 1; i--) {
        if (p[i] > p[i+1]) {
            ans = i;
            break;
        }
    }
    
    cout << ans;
    return 0;
}
