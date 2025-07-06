/*********************************************************************************************************** 
 * Yêu cầu: Có một lưới n x n chứa kí tự 'A' .. 'Z', xuất phát từ (0, 0) đến (n-1, n-1).
 *  Mỗi bước được đi sang phải hoặc xuống dưới.
 *  Tìm chuỗi ký tự tối tiểu theo thứ tự từ điển có thể thu được trên một đường đi như vậy.
 * Giải: 
 *  Mỗi bước, duyệt qua tất cả các vị trí đang có (curPos) và xét 2 hướng đi: Xuống (x+1, y), Phải (x, y+1).
 *  Trong các ô có thể đi tới, tìm ký tự nhỏ nhất minC.
 *  Chỉ giữ lại các ô có ký tự đúng bằng minC để mở rộng ở bước tiếp theo (nextPos).
 *  Cập nhật tập vị trí hiện tại curPos = nextPos, và thêm minC vào chuỗi ans.
 *  Lặp lại quá trình trên tổng cộng 2n - 2 lần (tổng số bước đi từ (0,0) đến (n-1,n-1)).
***********************************************************************************************************/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

template <typename T> 
using indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define int int64_t
const int MAXN = 3000 + 5;
const int MOD = 1e9 + 7;

int n;
string ans;
vector<string> grid;
vector<pair<int, int>> curPos, nextPos;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    grid.resize(n);

    for (int i = 0; i < n; i++)
        cin >> grid[i];
    
    curPos.push_back({0, 0});
    ans += grid[0][0];

    for (int i = 1; i <= 2 * (n - 1); i++) {
        char minC = 'Z' + 1;
        nextPos.clear();

        for (auto &[x, y] : curPos) {
            if (x + 1 < n) {
                char c = grid[x + 1][y];
                if (c < minC) {
                    minC = c;
                    nextPos.clear();
                    nextPos.push_back({x + 1, y});
                } else if (c == minC) {
                    nextPos.push_back({x + 1, y});
                }
            }

            if (y + 1 < n) {
                char c = grid[x][y + 1];
                if (c < minC) {
                    minC = c;
                    nextPos.clear();
                    nextPos.push_back({x, y + 1});
                } else if (c == minC) {
                    nextPos.push_back({x, y + 1});
                }
            }
        } 

        sort(nextPos.begin(), nextPos.end());
        nextPos.erase(unique(nextPos.begin(), nextPos.end()), nextPos.end());
        curPos = move(nextPos);
        ans += minC;
    }

    cout << ans;
    return 0;
}