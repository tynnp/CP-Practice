#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

struct info {
    int day;
    string name;
    int val;
};

int n, ans, maxVal = 100;
vector<info> v;
vector<string> display;
map<string, int> m;

bool update() {
    string nameMaxVal;
    vector<string> checkDisplay;
    maxVal = max({m["Bessie"], m["Elsie"], m["Mildred"]});
    
    for (auto p : m) 
        if (p.second == maxVal) 
            checkDisplay.push_back(p.first);
    
    if (checkDisplay != display) {
        display = checkDisplay;
        return true;
    }
    
    return false;
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    freopen("measurement.in", "r", stdin);
    freopen("measurement.out", "w", stdout);
    
    cin >> n;
    v.resize(n);
    m["Bessie"] = m["Elsie"] = m["Mildred"] = 100;
    
    for (int i = 0; i < n; i++)  
        cin >> v[i].day >> v[i].name >> v[i].val;
        
    sort(v.begin(), v.end(), [] (info a, info b) {
        return a.day < b.day;
    });
    
    for (int i = 0; i < n; i++) {
        m[v[i].name] += v[i].val;
        ans += update();
    }
    
    cout << ans;
    return 0;
}