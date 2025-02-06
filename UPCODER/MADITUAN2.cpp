#include <bits/stdc++.h>
using namespace std;

struct ToaDo {
    int first, second;
    ToaDo(int a, int b): first(a), second(b) {}
};

int n, m, xA, yA, xB, yB;
int a[1001][1001];
queue<ToaDo> q;

int dx[] = {-1, -2, -2, -1, 1, 2, 2, 1};
int dy[] = {-2, -1, 1, 2, 2, 1, -1, -2};

int main() {
    cin >> n >> m >> xA >> yA >> xB >> yB;
    q.push({xA, yA});
    
    while (!q.empty()) {
        ToaDo cur = q.front();
        q.pop();
        
        for (int i = 0; i < 8; i++) {
            int xx = cur.first + dx[i];
            int yy = cur.second + dy[i];
            if (xx >= 1 && xx <= n && yy >= 1 && yy <= m && !a[xx][yy]) {
                a[xx][yy] = a[cur.first][cur.second] + 1;
                q.push({xx, yy});
            }
        }
    }
    
    cout << (a[xB][yB] == 0 ? -1 : a[xB][yB]);
    return 0;
}