/*********************************************************************************************************** 
 * Yêu cầu: Tạo danh sách cách chuỗi bit có độ dài n, chuỗi kề nhau khác nhau đúng 1 bit (gray code).
 * Giải: 
 *  Bắt đầu từ chuỗi "0", "1". 
 *  Nếu độ dài chưa bằng n, đảo ngược thứ tự tất cả chuỗi hiện tại, chèn vào danh sách. => "0", "1", "1", "0".
 *  Chèn '0' vào nửa đầu danh sách, '1' vào nửa cuối danh sách => "00", "01", "11". "10". 
 *  Lặp lại nếu độ dài chuỗi chưa bằng n.
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int64_t n;
vector<string> v = {"0", "1"};

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    while (v[0].size() < n) {
        vector<string> u = v;
        reverse(u.begin(), u.end());
        v.insert(v.end(), u.begin(), u.end());
        
        int mid = v.size()/2;
        for (int i = 0; i < mid; i++)
            v[i].insert(v[i].begin(), '0');

        for (int i = mid; i < v.size(); i++)
            v[i].insert(v[i].begin(), '1');
    }

    for (string x : v)
        cout << x << '\n';
    
    return 0;
}