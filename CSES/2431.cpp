/*********************************************************************************************************** 
 * Yêu cầu: Tìm kí tự ở vị trí k trong chuỗi vô hạn 1234567891011121314...
 * Ý tưởng:
 *  - Chia chuỗi thành các đoạn theo số chữ số:
 *      + d = 1: các số 1..9   → 9 số → 9×1 = 9 chữ số
 *      + d = 2: các số 10..99 → 90 số → 90×2 = 180 chữ số
 *      + d = 3: các số 100..999 → 900 số → 900×3 = 2700 chữ số
 *      ...
 *  - Tìm độ dài d sao cho đoạn d đó chứa vị trí k
 *      → mỗi đoạn có: d × 9 × 10^(d - 1) chữ số
 *  - Khi tìm được đoạn:
 *      + Tìm số thứ (k - 1) / d trong đoạn → số = srt + (k - 1) / d
 *      + Lấy chữ số tại vị trí (k - 1) % d trong số đó
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
int q, k;

char calc(int k) {
    int d = 1;
    int cnt = 9;
    int srt = 1;
    
    while (k > d * cnt) {
        k -= d * cnt;
        d++;
        cnt *= 10;
        srt *= 10;
    }
    
    string s = to_string(srt + (k-1)/d);
    return s[(k-1) % d];
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> q;
    
    while (q--) {
        cin >> k;
        cout << calc(k) << '\n';
    }

    return 0;
}