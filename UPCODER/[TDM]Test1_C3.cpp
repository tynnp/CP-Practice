#include <bits/stdc++.h>
using namespace std;

int n, m;
int adj[100][100];

int main() {
    cin >> n >> m;

    while (m--) {
        int a, b;
        cin >> a >> b;
        adj[a][b] = 1; 
        adj[b][a] = 1;
    }

    cout << n << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) 
            cout << adj[i][j] << " ";
        cout << endl;
    }

    return 0;
}