#include <bits/stdc++.h>
using namespace std;

int n, a[100][100];
int sum, curSum;
vector<int> path, curPath;

int di[] = {1, 1};
int dj[] = {0, 1};

void Try(int i, int j) {
    curSum += a[i][j];
    curPath.push_back(a[i][j]);
    
    if (i == n) {
        if (curSum > sum) {
            sum = curSum;
            path = curPath;
        }
        return;
    }
    
    for (int k = 0; k < 2; k++) {
        int x = i + di[k];
        int y = j + dj[k];
        
        if (y <= x) {
            Try(x, y);
            curSum -= a[x][y];
            curPath.pop_back();
        }
    }
}

int main() {
    cin >> n;
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
            cin >> a[i][j];

    Try(1, 1);
    
    for (int i = 0; i < path.size(); i++)
        cout << path[i] << ' ';
    cout << endl << sum;
    
    return 0;
}
