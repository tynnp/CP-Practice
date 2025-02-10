#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int k;
    cin >> s >> k;
    
    string x = s.substr(0, k);
    string y = s.substr(k);
    
    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());
    
    cout << x << y << endl;
    return 0;
}