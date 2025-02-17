#include <bits/stdc++.h>
using namespace std;
const int MAXN = 8 + 5;

int n, sum, ans;
int a[MAXN][MAXN];

vector<int> duongDi;
vector<int> ketQua;

int dx[] = {1, 0, 1};
int dy[] = {0, 1, 1};

void Try(int x, int y) {
    if (x == n) {
        if (sum > ans) {
            ans = sum;
            ketQua = duongDi;
        }
        return;
    }
    
    for (int i = 0; i < 3; i++) {
        int u = x + dx[i];
        int v = y + dy[i];
        
        if (u >= 1 && u <= n && v >= 1 && v <= u) {
            sum += a[u][v];
            duongDi.push_back(a[u][v]);
            
            //cout << u << " " << v << endl;
            Try(u, v);
            
            sum -= a[u][v];
            duongDi.pop_back();
        }
    }
}

int main() {
    cin >> n;
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
            cin >> a[i][j];
    
    ans = sum = a[1][1];
    duongDi.push_back(a[1][1]);
    ketQua = duongDi;
    Try(1, 1);
    
    cout << ans << endl;
    for (int i = 0; i < ketQua.size(); i++)
        cout << ketQua[i] << ' ';
    
    return 0;
}