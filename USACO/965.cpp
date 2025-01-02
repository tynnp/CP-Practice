#include <bits/stdc++.h>
using namespace std;

int n;
vector<pair<string, string>> v;
vector<string> s = {"Bessie", "Buttercup", "Belinda", "Beatrice", "Bella", "Blue", "Betsy","Sue"};

bool check() {
    for (auto p : v) {
        auto x = find(s.begin(), s.end(), p.first);
        auto y = find(s.begin(), s.end(), p.second);
        
        if (abs(x - y) != 1)
            return false;
    }

    return true;
}

int main() {
    freopen("lineup.in", "r", stdin);
    freopen("lineup.out", "w", stdout);
    cin.tie(0) -> ios_base::sync_with_stdio(0);

    cin >> n;
    cin.ignore();

    while (n--) {
        string line;    
        getline(cin, line);
        stringstream ss(line);
        string s, t;
        ss >> s;
        while (ss >> t);
        v.push_back({s, t});
    }

    sort(s.begin(), s.end());
    
    
    do {
        bool valid = check();

        if (valid) {
            for (string x : s)
                cout << x << '\n';
            break;
        }
        
    } while (next_permutation(s.begin(), s.end()));

    return 0;
}