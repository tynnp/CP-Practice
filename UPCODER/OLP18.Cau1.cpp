#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    string s;
    
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> s;
            if (s == "abcde") {
                cout << char('A' + j) << i + 1;
            }
        }
    }
    
    return 0;
}