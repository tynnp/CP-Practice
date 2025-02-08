#include <iostream>
#include <set>
using namespace std;
 
bool palindrome(string s) {
    int n = s.size();
    for (int i = 0; i < n/2; i++) 
        if (s[i] != s[n-i-1]) 
            return false;
    return true;
}

int main() {
    int t; 
    cin >> t; 

    while (t--) {
        string s; 
        set<string> ans; 

        cin >> s;

        int n = s.size();
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j + i <= n; j++) {
                string tmp = s.substr(j, i);
                if (palindrome(tmp)) 
                    ans.insert(tmp);
            }
        }

        cout << ans.size() << endl;
    }

    return 0;
}