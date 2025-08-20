#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n, S = 1; 
    cin >> n;

    while (n) {
        S *= n % 10; 
        n /= 10;
    }
    
    cout << S;
    return 0;
}