#include <bits/stdc++.h>
using namespace std;
 
int n, check;
int main() {
    cin >> n;
    
    for (int i = 2; i*i <= n; i++) {
        int cnt = 0; bool check2 = false; 
        while (n % i == 0) {
            check2 = true;
            n /= i; cnt++;
        } 
        
        if (check2) check++;
        if (check > 1 && check2) cout << "*";
        if (check2 && cnt > 1) cout << i << "^" << cnt;
        else if (check2) cout << i; 
    } 
    
    if (n && check && n > 1) cout << "*" << n;
    else if (n && n > 1) cout << n;
    return 0;
}