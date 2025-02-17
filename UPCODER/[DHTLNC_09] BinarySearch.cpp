#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int n, m, k; 
    string s;
    bool check = true;
    
    cin >> n >> m;
    vector<pair<string, int>> a(n);

    for (int i = 1; i <= n; i++) {
        cin >> s >> k;
        a.push_back({s, k});
    }

    for (auto x : a) 
        if (x.second == m) {
            cout << x.first;
            check = false;
            break;
        }

    if (check) cout << "NO";
    return 0;
}