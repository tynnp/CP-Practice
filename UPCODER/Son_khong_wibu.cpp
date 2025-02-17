#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;  
    int n = s.size();
    set<string> ans; 

    for (int i = 0; i < n; i++) {
        for (int j = i + 5; j < n; j++) {
            string sub = s.substr(i, j - i + 1);
            bool up = false, low = false, digit = false;

            for (char c : sub) {
                if (isupper(c))
                    up = true;

                else if (islower(c))
                    low = true;

                else if (isdigit(c))
                    digit = true;

                if (up && low && digit)
                    break;
            }

            if (up && low && digit)
                ans.insert(sub);
        }
    }

    cout << ans.size();
    return 0;
}
