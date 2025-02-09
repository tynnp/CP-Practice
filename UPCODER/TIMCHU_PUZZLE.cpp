#include <bits/stdc++.h>
using namespace std;
const int MAXN = 50 + 5;

int dx[] = {0, 0, 1, -1, 1, -1, 1, -1};
int dy[] = {1, -1, 0, 0, 1, 1, -1, -1};

int n, m, t;
char c[MAXN][MAXN];

bool isValid(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

bool find(string &word, int x, int y, int dir, vector<pair<int, int>> &kq) {
    int len = word.size();
    kq.clear();

    for (int i = 0; i < len; i++) {
        if (!isValid(x, y) || c[x][y] != word[i])
            return false;

        kq.emplace_back(x + 1, y + 1);
        x += dx[dir];
        y += dy[dir];
    }

    return true;
}

bool search(string &word, vector<pair<int, int>> &kq) {
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++) 
            for (int dir = 0; dir < 8; dir++)
                if (find(word, i, j, dir, kq))
                    return true;
    return false;
}

int main() {
    cin >> n >> m >> t;
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> c[i][j];

    while (t--) {
        string word;
        cin >> word;
        vector<pair<int, int>> kq;

        if (search(word, kq)) {
            cout << "YES" << endl;
            for (auto &p : kq) 
                cout << "(" << p.first << "," << p.second << ") ";
            cout << endl;

        } else  
            cout << "NO" << endl;
    }

    return 0;
}