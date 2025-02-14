#include <bits/stdc++.h>
using namespace std;

int len(int k) {
    if (k == -1) 
        return 0;
  
    int x = len(k - 1);
    return 2 * x + k + 3;
}

char find(int n, int k) {
    if (n > len(k))
        return find(n, k+1);
    
    if (n <= len(k-1))
        return find(n, k-1);
    
    n -= len(k - 1);
    if (n <= k + 3) 
        return n == 1 ? 'b' : 'o';
    
    n -= k + 3;
    return find(n, k-1);
}

int main() {
    int n, t;
    cin >> t;
    
    while (t--) {
        cin >> n;
        cout << find(n, 0) << endl;
    }
    
    return 0;
}