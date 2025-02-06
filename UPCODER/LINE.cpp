#include <bits/stdc++.h>
using namespace std;

int n, a, b, c, d;
int mt[100][100];

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

bool Try(int x, int y) {
    if (x == c && y == d) 
        return true;

    for (int i = 0; i < 4; i++) {
        int xx = x + dx[i];
        int yy = y + dy[i];

        if (xx >= 1 && xx <= n && yy >= 1 && yy <= n && !mt[xx][yy]) {
            mt[xx][yy] = 1;
            if (Try(xx, yy)) 
                return true;
            mt[xx][yy] = 0;
        }
    }
    
    return false;
}

int main() {
    ifstream fin("LINE.inp");
    ofstream fout("LINE.out");
    
    fin >> n >> a >> b >> c >> d;
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            fin >> mt[i][j];
    
    fout << (Try(a, b) ? "YES" : "NO");
    
    fin.close();
    fout.close();
    return 0;
}