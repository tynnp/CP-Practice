#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> v(5);

int main() {
    for (int i = 0; i < 5; i++)
        cin >> v[i];
    
    cin >> n >> k;
    
    if (n > 5) {
        cout << "null";
        return 0;
    }
    
    if (k < 0) {
        n += k + 1;
        k = -k;
    }
    
    for (int i = n; i < n + k; i++) 
        if (i >= 1 && i <= 5)   
            cout << v[i - 1] << ' ';
  
    return 0;
}