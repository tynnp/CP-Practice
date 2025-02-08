#include <bits/stdc++.h>
using namespace std;

bool doiXung(const string &s) {
    int i = 0, j = s.size() - 1;

    while (i < j) {
        if (s[i] != s[j])
            return false;
        i++, j--;
    }

    return true;
}

string s;
set<string> ans;

int main() {
    cin >> s;

    for (int i = 1; i <= s.size(); i++) {
        for (int j = 0; j < s.size(); j++) {
            string sub = s.substr(j, i);
            if (doiXung(sub))
                ans.insert(sub);
        }
    }
    
    cout << ans.size();
    return 0;
}