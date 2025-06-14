#include <bits/stdc++.h>
using namespace std;

string s;
int cnt[300], le;

int main() {
    cin >> s;
    for (char c : s) cnt[c]++;
    
    for (int i = 0; i < 300; i++)
        if (cnt[i] & 1) le++;
    
    if (le) 
        cout << s.size() - le + 1;
    else 
        cout << s.size();
    
    return 0;
}