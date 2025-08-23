#include <bits/stdc++.h>
using namespace std;

int n, a[1001][1001];
string res("");

int dx[] = {1, 0, 0, -1};
int dy[] = {0, 1, -1, 0};
char dc[] = {'X', 'P', 'T', 'L'};

void Try(int x, int y) {
    if (x == n && y == n) {
        cout << res << '\n';
        return;
    } 

    for (int i = 0; i < 4; i++) {
        int u = x + dx[i];
        int v = y + dy[i];

        if (u >= 1 && u <= n && v >= 1 && v <= n && a[u][v] == 1) {
            res.push_back(dc[i]);
            a[u][v] = 0;
                
            Try(u, v);
                
            res.pop_back();
            a[u][v] = 1;
        }
    }
}

int main() {
    cin >> n;
    
    for (int i = 1; i <= n; i++) 
        for (int j = 1; j <= n; j++) 
            cin >> a[i][j];
    
    if (a[1][1] == 0 || a[n][n] == 0) {
        cout << -1;
        return 0;
    }

    a[1][1] = 0;
        
    for (int k = 0; k < 2; k++) {
        int u = 1 + dx[k];
        int v = 1 + dy[k];

        if (a[u][v] == 1) {
            a[u][v] = 0;
            res.push_back(dc[k]);
                
            Try(u, v);
                
            res.pop_back();
            a[u][v] = 1;
        }
    }
    
    return 0;
}