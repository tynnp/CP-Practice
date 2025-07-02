/*********************************************************************************************************** 
 * Yêu cầu: Chia táo thành 2 nhóm, sao cho khối lượng chênh lệch nhỏ nhất.
 * Giải: 
 *  Vét cạn các trường hợp, sum(idx, sumA, sumB) là vị trí hiện tại, và khối lượng 2 nhóm hiện tại.
 *  Khi đã chia xong, trả về chênh lệch giữa sumA và sumB. 
 *  Ngược lại gọi x là thêm vào tổng A, y là thêm vào tổng B. Lấy min(x, y).
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 20;
int n, a[MAXN];

int solve(int idx, int sumA, int sumB) {
    if (idx == n) 
        return abs(sumA - sumB);
        
    int x = solve(idx + 1, sumA + a[idx], sumB);
    int y = solve(idx + 1, sumA, sumB + a[idx]);
    return min(x, y);
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    cout << solve(0, 0, 0);
    return 0;
}