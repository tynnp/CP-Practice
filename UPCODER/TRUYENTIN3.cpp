#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;

    cin >> n;
    cin.ignore();
    
    while (n--) {
        getline(cin, s);
        string ans;

        for (int i = 0; i < s.size(); i++) {
            if (i > 0 && isupper(s[i]))
                ans.push_back(' ');
            ans.push_back(s[i]);
        }

        cout << ans << endl;
    }

    return 0;
}