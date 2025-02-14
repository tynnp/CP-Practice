#include <iostream>
using namespace std;
 
int n, k, ans, cnt;
bool check;
int a[55];

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 1; i < n; i++) 
        if (a[i-1] != a[i]) cnt++;

    if (cnt == 0 && a[0] == 0) {
        cout << 0; 
        check = true;
    }

    for (int i = 0; i < n; i++) 
        if (a[i] >= a[k-1] && a[i] != 0) 
            ans++;
        
    if (!check) 
        cout << ans;
    return 0;
}