#include <bits/stdc++.h>
using namespace std;
 
bool check(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int a[5]; 
    int ans = -1;

    for (int &x : a) cin >> x;  
    for (int x : a) 
        if (check(x)) ans = x;

    cout << ans;
    return 0;
}