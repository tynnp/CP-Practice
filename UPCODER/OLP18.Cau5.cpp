#include <bits/stdc++.h>
using namespace std;

int n;
char c[20][20];
unordered_set<string> ans, u[20][20];

int dx[] = {1, 0};
int dy[] = {0, 1};

void TryB(string x, int i, int j) {
    if (i + j == n - 1) {
        u[i][j].insert(x);
        return;
    }
    
    x += c[i][j];
    
    for (int k = 0; k < 2; k++) 
        TryB(x, i + dx[k], j + dy[k]);
}

void TryE(string x, int i, int j) {
    if (i + j == n - 1) {
        if (u[i][j].find(x) != u[i][j].end())
            ans.insert(x + c[i][j]);
        return;
    }
    
    x += c[i][j];
    
    for (int k = 0; k < 2; k++) 
        TryE(x, i - dx[k], j - dy[k]);
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)    
            cin >> c[i][j];
    
    TryB("", 0, 0);
    TryE("", n-1, n-1);
    
    cout << ans.size();
    return 0;
}

// 4/12
// #include <bits/stdc++.h>
// using namespace std;

// int n;
// string s;
// char c[20][20];
// bool visited[20][20];
// set<string> ans;

// int dx[] = {0, 1};
// int dy[] = {1, 0};

// bool doiXung(string s) {
//     int n = s.size();
//     for (int i = 0; i < n/2; i++)
//         if (s[i] != s[n-i-1])
//             return false;
//     return true;
// }

// void Try(int x, int y) {
//     if (x == n && y == n) {
//         if (doiXung(s))
//             ans.insert(s);
//         return;
//     }
    
//     for (int i = 0; i < 2; i++) {
//         int u = x + dx[i];
//         int v = y + dy[i];
        
//         if (u >= 1 && u <= n && v >= 1 && v <= n && !visited[u][v]) {
//             s.push_back(c[u][v]);
//             visited[u][v] = true;
            
//             Try(u, v);
            
//             s.pop_back();
//             visited[u][v] = false;
//         }
//     }
// }

// int main() {
//     cin.tie(0) -> sync_with_stdio(0);
//     cin >> n;
    
//     for (int i = 1; i <= n; i++)
//         for (int j = 1; j <= n; j++)
//             cin >> c[i][j];
    
//     s.push_back(c[1][1]);
//     visited[1][1] = true;
//     Try(1, 1);
    
//     cout << ans.size();
//     return 0;
// }