#include <iostream>
using namespace std;

#define int int64_t 
int t, a, b;
string s;

int pow(int a, int b) {
    int res = 1;
    
    while (b) {
        if (b & 1) 
            res = res * a % 10;
        a = a * a % 10;
        b >>= 1;
    }
    
    return res;
}

int32_t main() {
    cin >> t;
    
    while (t--) {
        cin >> s >> b;
        a = s[s.size() - 1] - '0';
        cout << pow(a, b) << '\n';
    }
    
    return 0;
}