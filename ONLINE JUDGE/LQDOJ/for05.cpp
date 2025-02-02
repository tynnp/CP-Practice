#include <bits/stdc++.h>
using namespace std;

int main() {
    int64_t n, sum = 0;
    cin >> n;

    for (int i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n/i)
                sum += n/i;
        }
    }

    if (sum == n*2)
        cout << "YES";
    else 
        cout << "NO";
    
    return 0;
}