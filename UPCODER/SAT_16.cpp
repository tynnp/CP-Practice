#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    
    int ans = -1;
    for (int i = 0; i < s.size(); i++) 
        if (s[i] >= '0' && s[i] <= '9')
            ans = max(ans, s[i] - '0');
            
    cout << ans;
    return 0;
}