#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n, S = 0; 
    cin >> n;

    for (long long i = 1; i <= n; i++) 
        if (n % i == 0)     
            cout << i << endl;
    
    return 0;
}
