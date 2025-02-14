#include <bits/stdc++.h>
using namespace std;

string x, s;
int t, ans;

int cnt(string x) {
    int res = 0;
    size_t pos = s.find(x);
    
    while (pos != string::npos) {
        res++;
        pos = s.find(x, pos + 1);
    }
    
    return res;
}

int main() {
    getline(cin, s);
    cin >> t;
    cin.ignore();
    
    while (t--) {
        getline(cin, x);
        ans = max(ans, cnt(x));
    }
    
    cout << ans;
    return 0;
}