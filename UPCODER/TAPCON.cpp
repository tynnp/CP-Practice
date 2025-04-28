#include <iostream>
#include <vector>
using namespace std;

int n; 
vector<int> v, sub;

void Try(int idx) {
    if (idx == n) {
        cout << "{";
        int m = sub.size();
        
        for (int i = 0; i < m; i++) {
            cout << sub[i];
            if (i != m - 1)
                cout << ",";
        }
        
        cout << "}\n";
        return;
    }
    
    Try(idx + 1);
    sub.push_back(v[idx]);
    Try(idx + 1);
    sub.pop_back();
}

int main() {
    cin >> n;
    v.resize(n);
    for (int &x : v) cin >> x;
    Try(0);
    return 0;
}