#include <iostream>
using namespace std;

int n, ans;
bool check;
string a, b;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    freopen("breedflip.in", "r", stdin);
    freopen("breedflip.out", "w", stdout);
    cin >> n >> a >> b;
    
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            if (!check) {
                check = true;
                ans++;
            }
        } else {
            check = false;
        }
    }
  
    cout << ans;
    return 0;
}