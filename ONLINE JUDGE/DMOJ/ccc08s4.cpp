#include <bits/stdc++.h>
using namespace std;

int n, ans;
bool choose[4];
vector<vector<int>> v;

int tinh(int x, int y, int ope) {
    switch (ope) {
        case 0: return x + y;
        case 1: return x - y;
        case 2: return x * y;
        case 3: {
            if (y != 0 && x % y == 0)
                return x / y;
            else 
                return INT_MIN;
        }
    }
    
    return INT_MIN;
}

void Try(vector<int> arr, vector<int> ope) {
    if (ope.size() == 4) {
      
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                for (int k = 0; k < 4; k++) {
                  
                    int x = tinh(arr[0], arr[1], ope[i]);
                    if (x == INT_MIN)
                        continue;
                    
                    int y = tinh(x, arr[2], ope[j]);
                    if (y == INT_MIN)
                        continue;
                        
                    int z = tinh(y, arr[3], ope[k]);
                    if (z == INT_MIN)
                        continue;
                    
                    if (z <= 24)
                        ans = max(ans, z);
                }
            }
        }
        
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                for (int k = 0; k < 4; k++) {
                  
                    int x = tinh(arr[0], arr[2], ope[i]);
                    if (x == INT_MIN)
                        continue;
                        
                    int y = tinh(arr[1], arr[3], ope[j]);
                    if (y == INT_MIN)
                        continue;
                        
                    int z = tinh(x, y, ope[k]);
                    if (z == INT_MIN)
                        continue;
                        
                    if (z <= 24)
                        ans = max(ans, z);
                }
            }
        }
        
        return;
    }
    
    for (int i = 0; i < 4; i++) {
        if (choose[i])
            continue;
        
        choose[i] = true;
        ope.push_back(i);
        
        Try(arr, ope);
        
        choose[i] = false;
        ope.pop_back();
    }
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    v.resize(n);
    
    for (int i = 0; i < n; i++) {
        v[i].resize(4);
        for (int &x : v[i])
            cin >> x;
    }
    
    for (int i = 0; i < n; i++) {
        ans = INT_MIN;
        sort(v[i].begin(), v[i].end());
        vector<int> ope;
        
        do {
            Try(v[i], ope);
        } while (next_permutation(v[i].begin(), v[i].end()));
        
        cout << ans << '\n';
    }
}