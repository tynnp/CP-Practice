#include <bits/stdc++.h>
using namespace std;

string trans(string s) {
    int idx = 0;
    int n = s.size();

    while (idx < n && s[idx] == '0') idx++;
    if (idx == n) return "0";
    return s.substr(idx);
}

bool div3(string s) {
    int sum = 0;
    for (char c : s) 
        sum += c - '0';
    return sum % 3 == 0;
}

int main() {
    freopen("NUMSET.INP", "r", stdin);
    freopen("NUMSET.OUT", "w", stdout);
    string s;
    set<string> lst;
    cin >> s;

    int n = s.size();
    lst.insert(s);
    
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (i == 0 && j == n-1)
                continue;

            string num;
            
            if (i > 0)
                num += s.substr(0, i);
            if (j < n - 1)
                num += s.substr(j + 1);

            num = trans(num);
            lst.insert(num);
        }
    }

    int ans = 0;
    for (string num : lst) 
        ans += div3(num);

    cout << ans;
    return 0;
}