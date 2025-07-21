#include <bits/stdc++.h>
using namespace std;

void calc(int n) {
    for (int i = n; i >= 1; i--)
        cout << i << '\n';
    cout << ">>>";
}

int main() {
    int n;
    cin >> n;
    
    if  (n > 0) calc(n);
    else cout << "Không hợp lệ.";
    
    return 0;
}