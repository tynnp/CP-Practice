#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, n = 10;
    set<int> s;
    
    while (n--) {
        cin >> x;
        s.insert(x % 42);
    }
    
    cout << s.size();
    return 0;
}