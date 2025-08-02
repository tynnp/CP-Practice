#include <iostream>
#include <set>
#include <map>
using namespace std;

int x, y;
char c[3][3];
map<string, bool> m;

bool check(char a, char b, char c) {
    set<char> res;
    res.insert({a, b, c});
    
    if (res.size() == 1 && !m["" + a]) {
        m["" + a] = true;
        return true;
    }
    
    return false;
}

bool cnt(char a, char b, char c) {
    set<char> res;
    res.insert({a, b, c});
    
    string str;
    for (auto kt : res)
        str += kt;
    
    if (res.size() == 2 && !m[str]) {
        m[str] = true;
        return true;
    }
    
    return false;
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    freopen("tttt.in", "r", stdin);
    freopen("tttt.out", "w", stdout);
    
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> c[i][j];
        
    for (int i = 0; i < 3; i++) {
        x += check(c[i][0], c[i][1], c[i][2]);
        x += check(c[0][i], c[1][i], c[2][i]); 
        y += cnt(c[i][0], c[i][1], c[i][2]);
        y += cnt(c[0][i], c[1][i], c[2][i]); 
    }
    
    x += check(c[0][0], c[1][1], c[2][2]);
    x += check(c[0][2], c[1][1], c[2][0]);
    y += cnt(c[0][0], c[1][1], c[2][2]);
    y += cnt(c[0][2], c[1][1], c[2][0]);
        
    cout << x << '\n' << y;
    return 0;
}