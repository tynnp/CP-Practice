#include <iostream>
using namespace std;

int main() {
    string s;
    int cnt = 1, ans = 1;
    cin >> s;

    for (int i = 1; i < s.size(); i++) {
        if (s[i-1] == s[i])
            cnt++;
        else 
            cnt = 1;
        ans = max(ans, cnt);
    }

    cout << ans;
    return 0;
}