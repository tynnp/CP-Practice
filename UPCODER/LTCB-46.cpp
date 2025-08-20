#include <bits/stdc++.h>
using namespace std;
  
int main() {
    int n, dem = 0; 
    cin >> n;

    while (n) {
        if ((n % 10) % 2 != 0) 
            dem++;
        n /= 10;
    }

    cout << dem;
    return 0;
}
