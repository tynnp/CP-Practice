#include <iostream>
#include <string>
using namespace std;

string trans(int n, int m) {
    string res = "";
    
    while (n > 0) {
        int k = n % m;
        
        if (k < 10)
            res = char(k + '0') + res;
        else
            res = char(k - 10 + 'A') + res;
    
        n /= m;
    }
    
    return res;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    cout << trans(n, m);
    return 0;
}