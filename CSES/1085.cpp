/*********************************************************************************************************** 
 * Yêu cầu: Chia mảng thành k đoạn con liên tiếp sao cho giá trị lớn nhất của tổng các đoạn là nhỏ nhất có thể.
 * Giải: Dùng tìm kiếm nhị phân để xác định tổng nhỏ nhất có thể chia.
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 2e5 + 5;

int n, k, a[MAXN];

bool check(int mid) {
    int sum = 0, cnt = 1;
    
    for (int i = 0; i < n; i++) {
        sum += a[i];
        
        if (sum > mid) {
            cnt++;
            sum = a[i];

            if (cnt > k) 
                return false;
        }
    }

    return true;
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> k;

    int mid, l = 0, r = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        r += a[i];
        l = max(l, a[i]);
    }

    while (l <= r) {
        mid = (l + r) >> 1;
        if (check(mid)) 
            r = mid - 1;
        else 
            l = mid + 1;
    }

    cout << l;
    return 0;
}