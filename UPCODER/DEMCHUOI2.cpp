#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    getline(cin, a);
    getline(cin, b);
    
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    
    int ans = 0;
    size_t pos = b.find(a);
    
    while (pos != string::npos) {
        pos = b.find(a, pos + a.size()-1);
        ans += 1;
    }
    
    cout << ans << endl;
    return 0;
}