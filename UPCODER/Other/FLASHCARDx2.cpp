#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, du = 0;
    stack<int> s;
    cin >> n;
    
    vector<int> v(n);
    for (int &x : v) cin >> x;
    reverse(v.begin(), v.end());

    for (int x : v) {
        x = x*2 + du;
        du = 0;
        
        if (x > 9) {
            x %= 10;
            du = 1;
        }
        
        s.push(x);
    }
    
    if (du > 0) s.push(du);
    
    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
    
    return 0;
}


// #include <iostream>
// using namespace std;

// int n, a[51], res[51];

// int main() {
//     cin >> n;
    
//     for (int i = 1; i <= n; i++)
//         cin >> a[i];
        
//     for (int i = n; i > 0; i--) {
//         a[i] *= 2;
//         res[i] += a[i] % 10;
//         res[i-1] += (a[i] > 9 ? 1 : 0);
//     }
    
//     for (int i = 0; i <= n; i++) {
//         if (i == 0 && res[i] != 0) 
//             cout << res[i] << endl;

//         if (i > 0)
//             cout << res[i] << endl;
//     }
    
//     return 0;
// }
