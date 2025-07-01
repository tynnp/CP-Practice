/*********************************************************************************************************** 
 * Yêu cầu: Sinh tất cả chuỗi hoán vị của chuỗi đầu vào.
 * Giải: Dùng hàm next_permutation
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

string s;
vector<string> v;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> s;

    sort(s.begin(), s.end());
    do {
        v.push_back(s);
    } while (next_permutation(s.begin(), s.end()));

    cout << v.size() << '\n';
    for (string x : v)
        cout << x << '\n';
    
    return 0;
}