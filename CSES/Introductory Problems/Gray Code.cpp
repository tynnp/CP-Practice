#include <bits/stdc++.h>
using namespace std;

int64_t n;
vector<string> v = {"0", "1"};

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    while (v[0].size() < n) {
        vector<string> u = v;
        reverse(u.begin(), u.end());
        v.insert(v.end(), u.begin(), u.end());
        
        int mid = v.size()/2;
        for (int i = 0; i < mid; i++)
            v[i].insert(v[i].begin(), '0');

        for (int i = mid; i < v.size(); i++)
            v[i].insert(v[i].begin(), '1');
    }

    for (string x : v)
        cout << x << '\n';
    
    return 0;
}