#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    
    for (int i = 0; i < s.size(); i++) 
        if (!isdigit(s[i]))
            s[i] = ' ';
    
    stringstream ss(s);
    int x, ans = 0;
    
    while (ss >> x) 
        ans += x;
        
    cout << ans;
    return 0;
}
