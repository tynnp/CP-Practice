#include <bits/stdc++.h>
using namespace std;

struct ToaDo {
    int Ox, Oy;
    ToaDo(int a, int b): Ox(a), Oy(b) {}
};

int n, m, sum;
int a[100][100];
vector<ToaDo> viTri;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};

void Try(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int xx = x + dx[i];
        int yy = y + dy[i];
        if (xx >= 1 && xx <= n && yy >= 1 && y <= m && a[xx][yy] == 1) {
            a[xx][yy] = 0;
            viTri.push_back({xx, yy});
            Try(xx, yy);
        }
    }
}

int main() {
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            if (a[i][j] == 1) sum++;
        }
        
    cout << sum << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i][j] == 1) {
                a[i][j] = 0;
                viTri.push_back({i, j});
                Try(i, j);
                
                cout << viTri.size();
                for (int k = 0; k < viTri.size(); k++) {
                    if (k > 0) cout << ",";
                    cout << " [" << viTri[k].Ox << "," << viTri[k].Oy << "]";
                } 
                
                cout << endl;
                viTri.clear();
            }
        }
    }
            
    return 0;
}