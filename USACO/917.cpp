#include <bits/stdc++.h>
using namespace std;

struct traffic {
    string type;
    int x, y;
};

int n, x, y;
vector<traffic> v;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    freopen("traffic.in", "r", stdin);
    freopen("traffic.out", "w", stdout);
    
    cin >> n;
    v.resize(n);
    
    for (auto &tr : v) 
        cin >> tr.type >> tr.x >> tr.y;
    
    x = -99999, y = 99999;
    for (auto it = v.rbegin(); it != v.rend(); it++) {
        if (it->type == "on") {
            x = max(0, x - it->y);
            y = max(0, y - it->x);
        } 
        
        if (it->type == "off") {
            x += it->x;
            y += it->y;
        }
        
        if (it->type == "none") {
            x = max(x, it->x);
            y = min(y, it->y);
        }
    }
    
    cout << x << ' ' << y << '\n';
    
    x = -99999, y = 99999;
    for (auto it = v.begin(); it != v.end(); it++) {
        if (it->type == "on") {
            x += it->x;
            y += it->y;
        } 
        
        if (it->type == "off") {
            x = max(0, x - it->y);
            y = max(0, y - it->x);
        }
        
        if (it->type == "none") {
            x = max(x, it->x);
            y = min(y, it->y);
        }
    }
    
    cout << x << ' ' << y << '\n';
    return 0;
}






