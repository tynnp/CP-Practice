#include <bits/stdc++.h>
using namespace std;

int idx, len;
string s;
map<char, int> m;

int main() {
    cin >> s;
    
    for (char &c : s)
        c = tolower(c);

    int i = 1, j = 1, k = 0;
    int n = s.size();
    s = ' ' + s;

    while (i <= n && j <= n) {
        k++;
        m[s[j]]++;

        while (m[s[j]] > 1) {
            k--;
            m[s[i++]]--;
        }

        if (k > len) {
            idx = i;
            len = k;
        } 
        
        j++;
    }
    
    cout << idx << ' ' << len;
    return 0;
}