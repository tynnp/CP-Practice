#include <bits/stdc++.h>
using namespace std;

string::iterator stringpbrk(string &s, const string& accept) {
    string t = s;
    transform(t.begin(), t.end(), t.begin(), ::tolower);

    for (const char c : accept) {
        size_t pos = t.find(tolower(c));
        if (pos != string::npos)
            return s.begin() + pos;
    }

    return s.end();
}

int main() {
    string s, ans;

    while (cin >> s) {
        auto pos = stringpbrk(s, "bdfhkt");
        if (pos == s.end() && ans.size() < s.size()) 
                ans = s;
    }

    cout << ans;
    return 0;
}
