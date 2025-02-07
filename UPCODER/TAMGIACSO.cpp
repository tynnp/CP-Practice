#include <bits/stdc++.h>
using namespace std;

int n, sum, ans;
int a[100][100];
vector<int> ketQua, duongDi;

int dx[] = {1, 1};
int dy[] = {0, 1};

void Try(int x, int y) {
    if (x == n-1) {
        if (ans < sum) {
            ans = sum;
            ketQua = duongDi;
        }
        return;
    } 
     
    for (int i = 0; i < 2; i++) {
        int xx = x + dx[i];
        int yy = y + dy[i];
            
        if (xx >= 0 && xx < n && yy >= 0 && yy <= xx) {
            sum += a[xx][yy];
            duongDi.push_back(a[xx][yy]);
                
            Try(xx, yy);
                
            sum -= a[xx][yy];
            duongDi.pop_back();
        }
    }  
}

int main() {
    cin >> n;
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++) 
            cin >> a[i][j];
    
    ans = INT_MIN;
    sum = a[0][0];
    duongDi.push_back(a[0][0]);
    Try(0, 0);
    
    for (int x : ketQua) 
        cout << x << " ";
    cout << endl;
    
    cout << ans;
    return 0;
}