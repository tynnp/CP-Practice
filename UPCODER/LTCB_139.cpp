#include <bits/stdc++.h>
using namespace std;
 
bool check(long long n) {
    long long res = 0;
    for (long long i = 1; i < n; i++)
        if (n % i == 0) res += i;
    return (res == n);
}

int main() {
    int n; 
    cin >> n; 

    long long arr[n];
    for (long long &x : arr) cin >> x;

    int ans = -1;
    for (int i = 0; i < n; i++) 
        if (check(arr[i]) && arr[i] > 0) {
            ans = i;
        }

    cout << ans;
    return 0;
}