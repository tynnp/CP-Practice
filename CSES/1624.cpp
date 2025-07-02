/*********************************************************************************************************** 
 * Yêu cầu: Tính cách đặt 8 quân hậu trên bàn cờ 8x8 sao cho chúng không ăn nhau.
 * Giải: Cần đặt 8 quân hậu ở 8 dòng, xét từng dòng, dùng quay lui để xét tất cả trường hợp.
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int ans;
char c[8][8];
bool visited[8][8];

bool check(int x, int y) {  
    if (c[x][y] == '*')
        return false;
    
    for (int i = 0; i <= x; i++)    
        if (visited[i][y]) 
            return false;
    
    for (int i = 0; i <= y; i++)
        if (visited[x][i])
            return false;
    
    for (int i = x, j = y; i >= 0 && j >= 0; i--, j--)
        if (visited[i][j])
            return false;
    
    for (int i = x, j = y; i >= 0 && j < 8; i--, j++)
        if (visited[i][j])
            return false;

    return true;
}

void Try(int x) {
    if (x == 8) {
        ans++;
        return;
    }

    for (int i = 0; i < 8; i++) {
        if (check(x, i)) {
            visited[x][i] = true;
            Try(x + 1);
            visited[x][i] = false;
        }
    }
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    
    for (int i = 0; i < 8; i++) 
        for (int j = 0; j < 8; j++) 
            cin >> c[i][j];

    Try(0);
    cout << ans;
    return 0;
}