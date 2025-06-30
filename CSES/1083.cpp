/*********************************************************************************************************** 
 * Yêu cầu: Cho một dãy gồm n - 1 số, chứa các số từ 1 đến n. Tìm số bị thiếu.
 * Giải cách 1: Dùng mảng đánh dấu, a[i] = true nếu i có xuất hiện, a[i] = false thì i là số cần tìm.
 * Giải cách 2: 
 *  Tính tổng 1 đến n ta có x = n * (n + 1) / 2. 
 *  Gọi y là tổng dãy n - 1 đề cho. 
 *  Số cần tìm là x - y.  
***********************************************************************************************************/
// Cách 1
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;
int64_t n, x;
bool a[MAXN];

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    for (int i = 1; i < n; i++) {
        cin >> x;
        a[x] = true;
    }

    for (int i = 1; i <= n; i++) 
        if (!a[i]) 
            cout << i;

    return 0;
}

// // Cách 2
// #include <bits/stdc++.h>
// using namespace std;

// int64_t n, a, x, y;

// int main() {
//     cin.tie(0) -> sync_with_stdio(0);
//     cin >> n;

//     x = n * (n + 1) / 2;

//     for (int i = 1; i < n; i++) {
//         cin >> a;
//         y += a;
//     }

//     cout << x - y;
//     return 0;
// }