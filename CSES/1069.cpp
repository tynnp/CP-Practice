/*********************************************************************************************************** 
 * Yêu cầu: Cho chuỗi ký tự. Tìm độ dài chuỗi con liên tiếp có cùng ký tự dài nhất.
 * Giải cách 1: Duyệt nếu s[i-1] == s[i] thì cnt++, ngược lại cnt = 1, mỗi bước cập nhật ans = max(ans, cnt).
 * Giải cách 2: Hai con trỏ
 *  Gọi i = 0, j = 0 là 2 con trỏ trỏ tới s[0].
 *  Tăng j đến khi nào s[i] != s[j] thì tăng i đến khi nào s[i] == s[j], sau đó tiếp tục lặp lại. 
 *  Mỗi bước cập nhật ans = max(ans, j - i + 1).
***********************************************************************************************************/
// // Cách 1
// #include <bits/stdc++.h>
// using namespace std;

// string s;
// int ans, cnt = 1;

// main() {
//     cin.tie(0) -> sync_with_stdio(0);
//     cin >> s;

//     for (int i = 1; i <= s.size(); i++) {
//         if (s[i-1] == s[i]) cnt++;
//         else cnt = 1;
//         ans = max(ans, cnt);
//     }

//     cout << ans;
//     return 0;
// }

// Cách 2
#include <bits/stdc++.h>
using namespace std;

string s;
int ans;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> s;

    int i = 0, j = 0;
    while (i < s.size() && j < s.size()) {
        j++;
        while (s[i] != s[j]) i++;
        ans = max(ans, j - i + 1);
    }

    cout << ans;
    return 0;
} 