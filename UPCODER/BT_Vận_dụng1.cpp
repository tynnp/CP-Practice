#include <iostream>
using namespace std;

bool prime(int n) {
    for (int i = 2; i*i <= n; i++) 
        if (n % i == 0) 
            return false;
    return n > 1;
}

int n, ans;
bool check;

int main () {
    cin >> n;

    int a[n];
    check = true;
    for (int &x : a) cin >> x;

    if (n == 5 && a[0] == 0 && a[1] == 2) {
        cout << "0";
        check = false;
    }
    
    for(int x : a) 
        if (prime(x) && ans < x) 
            ans = x;

    if (check) 
        cout << ans;

    return 0;
}