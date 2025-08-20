#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n, k = 0, S = 1; 
    cin >> n;

    while (n) {
        if ((n % 10) % 2 != 0) {
            S *= n % 10; 
            k++;
        } 
        n /= 10;
    }
    
    cout << (!k ? -1 : S);
    return 0;
}