#include <bits/stdc++.h>
using namespace std;

int sum(int n) {
    int res = 0;
    for (int i = 1; i <= n/2; i++)
        if (n % i == 0)
            res += i;
    return res;
}

int main() {
    int n;
    cin >> n;
    
    n++;
    while (true) {
        int s = sum(n);

        if (s > n) {
            cout << n;
            break;
        }

        n++;
    }
    
    return 0;
}