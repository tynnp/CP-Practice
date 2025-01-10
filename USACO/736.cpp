#include <iostream>
using namespace std;

int n, m, ans;
string a[105], b[105];

bool check(string strA, string strB) {
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++)
            if (strA[i] == strB[j])
                return false;
    return true;
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    
    for (int i = 0; i < n; i++)
        cin >> b[i];
    
    for (int j = 0; j < m; j++) {
        string strA, strB;
        
        for (int i = 0; i < n; i++) {
            strA += a[i][j];
            strB += b[i][j];
        }
            
        ans += check(strA, strB);
    }
    
    cout << ans;
    return 0;
}