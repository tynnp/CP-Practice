
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    int du = 0;
    for (int i = n - 1; i >= 0; i--) {
        int x = v[i] * 2 + du;
        du = 0;
        
        if (x > 9) {
            x %= 10;
            du = 1;
        }
        
        v[i] = x;
    }
    
    if (du == 1)
        cout << du << endl;
    
    for (int i = 0; i < n; i++)
        cout << v[i] << endl;
    
    return 0;
}
