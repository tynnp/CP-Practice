#include <bits/stdc++.h>
using namespace std;

int n, a[100][100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    
    bool directed = false; 
    bool simple = true;    

    for (int i = 0; i < n && !directed; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                directed = true;
                break;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (a[i][i] != 0) {
            simple = false;
            break;
        }
    }
    
    if (simple) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j && a[i][j] > 1) {
                    simple = false;
                    break;
                }
            }

            if (!simple) break;
        }
    }
    
    if (directed) {
        if (simple)
            cout << "Do thi G la don do thi co huong";
        else
            cout << "Do thi G la da do thi co huong";
    } else {
        if (simple)
            cout << "Do thi G la don do thi vo huong";
        else
            cout << "Do thi G la da do thi vo huong";
    }
    
    return 0;
}
