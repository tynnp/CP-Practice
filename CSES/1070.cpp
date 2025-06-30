/*********************************************************************************************************** 
 * Yêu cầu: Cho số n, hoán vị dãy 1 .. n sao cho không có số nào liền kề chênh nhau 1 đơn vị.
 * Giải: 
 *  Trường hợp 1 < n < 4 không có hoán vị nào phù hợp.
 *  In số chẳn trước, số lẻ sau. Không làm ngược lại, vì trường hợp n = 4 => 1 3 2 4, sẽ bị sai. 
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    if (n > 1 && n < 4) {
        cout << "NO SOLUTION";
        return 0;
    }

    for (int i = 2; i <= n; i += 2)
        cout << i << ' ';
    
    for (int i = 1; i <= n; i += 2)
        cout << i << ' ';
    
    return 0;
}
