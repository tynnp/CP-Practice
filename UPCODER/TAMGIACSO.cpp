#include <bits/stdc++.h>
using namespace std;

int sum, sumMax;
int n, a[100][100];
vector<int> path, pathRes;

int dx[] = {1, 1};
int dy[] = {0, 1};

void Try(int i, int j) {
    sum += a[i][j];
    path.push_back(a[i][j]);
    
    if (i == n - 1) {
        if (sum > sumMax) {
            sumMax = sum;
            pathRes = path;
        }
        
        return;
    }
    
    for (int k = 0; k < 2; k++) {
        int x = i + dx[k];
        int y = j + dy[k];
        
        if (y <= x) {
            Try(x, y);
            
            sum -= a[x][y];
            path.pop_back();
        }
    }
}

int main() {
    cin >> n;
    
    for (int i = 0; i < n; i++) 
        for (int j = 0; j <= i; j++)
            cin >> a[i][j];
 
    Try(0, 0);
    
    for (int i = 0; i < pathRes.size(); i++)
        cout << pathRes[i] << ' ';
    cout << endl;
    
    cout << sumMax;
    return 0;
}
