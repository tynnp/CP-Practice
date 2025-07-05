/*********************************************************************************************************** 
 * Yêu cầu: Với mỗi vị trí trong mảng, tìm ví trị gần nhất bên trái mà giá trị nhỏ hơn giá trị tại vị trí đó.
 * Giải: Duy trì 1 stack chứa các chỉ số có giá trị nhỏ hơn giá trị hiện tại, top() chính là giá trị gần nhất.
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 2e5 + 5;

int n, a[MAXN];
stack<int> s;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    
    for (int i = 1; i <= n; i++) {
        while (!s.empty() && a[s.top()] >= a[i]) s.pop();

        if (s.empty()) 
            cout << 0 << ' ';
        else 
            cout << s.top() << ' ';
        
        s.push(i);
    }

    return 0;
}