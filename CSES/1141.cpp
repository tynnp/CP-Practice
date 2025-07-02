/*********************************************************************************************************** 
 * Yêu cầu: Tìm độ dài đoạn con liên tiếp dài nhất không chứa ký tự trùng lặp.
 * Giải: 
 *  Dùng mảng đếm tần số xuất hiện của các phần tử trong đoạn [i, j]. 
 *  Con trỏ i và j trỏ tới đầu mảng, lần lượt tăng j. Nếu tần số a[j] > 1, tăng i và giảm tần số a[i] đến khi a[j] = 1.
 *  Độ dài lớn nhất là max(j - i + 1).
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 2e5 + 5;

int n, ans, a[MAXN];
map<int, int> m;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    
    int i = 0, j = 0;
    m[a[i]]++;

    while (i < n && j < n) {
        while (m[a[j]] > 1) 
            m[a[i++]]--;

        ans = max(ans, j - i + 1);
        m[a[++j]]++;
    }

    cout << ans;
    return 0;
}