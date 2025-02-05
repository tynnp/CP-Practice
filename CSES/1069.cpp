#include <iostream>
using namespace std;

// int main() {
//     string s;
//     int cnt = 1, ans = 1;
//     cin >> s;

//     for (int i = 1; i < s.size(); i++) {
//         if (s[i-1] == s[i])
//             cnt++;
//         else 
//             cnt = 1;
//         ans = max(ans, cnt);
//     }

//     cout << ans;
//     return 0;
// }

int main() {
    string s;
    cin >> s;

    int ans = 0;
    int i = 0, j = 0, n = s.size();

    while (i < n && j < n) {
        while (s[i] != s[j]) 
            i++;
        ans = max(ans, j - i + 1);
        j++;
    }

    cout << ans;
    return 0;
}