#include <iostream>
#include <map>
using namespace std;

char c;
int n, t, ans;
bool found;
map<pair<int, int>, int> m;

pair<int, int> get(char kt) {
    switch (kt) {
        case 'N': return {-1, 0};
        case 'E': return {0, 1};
        case 'S': return {1, 0};
        case 'W': return {0, -1};
    }
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    freopen("mowing.in", "r", stdin);
    freopen("mowing.out", "w", stdout);
    cin >> n;
    
    int xs = 0, ys = 0;
    int step = 1;
    ans = 1e6;
    
    while (n--) {
        cin >> c >> t;
        
        auto p = get(c);
        int x = p.first;
        int y = p.second;
        
        while (t--) {
            xs += x;
            ys += y;
            
            if (m[{xs, ys}]) {
                ans = min(ans, step - m[{xs, ys}]);
                found = true;
            }
            
            m[{xs, ys}] = step++;
        }
    }
    
    if (!found) ans = -1;
    cout << ans;
}