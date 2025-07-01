/*********************************************************************************************************** 
 * Yêu cầu: Từ chuỗi ban đầu, tạo thành chuỗi đối xứng. Nếu tạo không được thì in "NO SOLUTION".
 * Giải: 
 *  Đếm số lượng ký tự, nếu xuất hiện 2 ký tự có tần số xuất hiện lẻ thì in "NO SOLUTION". 
 *  Chèn ký tự đúng với tần số xuất hiện vào giữa chuỗi để tạo chuỗi đối xứng, chèn ký tự có tần số chẵn trước.
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

string s, ans;
int a[300], cntLe;
char ktLe;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> s;

    for (char c : s) a[c]++;
    for (int i = 0; i < 300; i++) {
        if (a[i] & 1) {
            cntLe++;
            ktLe = i;
        }
    }

    if (cntLe > 1) {
        cout << "NO SOLUTION";
        return 0;
    }

    for (int i = 0; i < 300; i++) 
        if (a[i] > 0 && a[i] % 2 == 0) 
            ans.insert(ans.size() / 2, a[i], i);

    if (cntLe) 
        ans.insert(ans.size() / 2, a[ktLe], ktLe);

    cout << ans;
    return 0;
}