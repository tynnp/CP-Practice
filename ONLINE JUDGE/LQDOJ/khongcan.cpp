#include <bits/stdc++.h>
using namespace std;

int main() {
    int64_t a, b, c;
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && c + b > a) {
        if (a == b || a == c || b == c)
            cout << "NO";
        else 
            cout << "YES";
    } else 
        cout << "NO";
        
    return 0;
}