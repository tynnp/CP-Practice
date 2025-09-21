#include <bits/stdc++.h>
using namespace std;

int n, a[100][100];
int ans, sum;
vector<int> ketQua, duongDi;

int dx[] = {1, 1};
int dy[] = {0, 1};

void Try(int i, int j) {
    sum += a[i][j];
    duongDi.push_back(a[i][j]);
    
    if (i == n) {
        if (sum > ans) {
            ans = sum;
            ketQua = duongDi;
        }
        return;
    }
    
    for (int k = 0; k < 2; k++) {
        int x = i + dx[k];
        int y = j + dy[k];
        
        Try(x, y);
        sum -= a[x][y];
        duongDi.pop_back();
    }
}

int main() {
    cin >> n;
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
            cin >> a[i][j];

    Try(1, 1);
    
    for (int i = 0; i < ketQua.size(); i++)
        cout << ketQua[i] << ' ';
    cout << '\n' << ans;
    
    return 0;
}