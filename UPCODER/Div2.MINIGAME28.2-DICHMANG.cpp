#include <bits/stdc++.h>
using namespace std;

string s;
int n, t, x;
deque<int> d;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> x;
        d.push_back(x);
    }
    
    cin >> t;
    cin.ignore();
    
    while (t--) {
        getline(cin, s);
        string h = s.substr(0, 2);
        x = stoi(s.substr(2)) % n;
        
        if (h == "<<") {
            while (x--) {
                int fr = d.front();
                d.pop_front();
                d.push_back(fr);
            }
        } else {
            while (x--) {
                int fr = d.back();
                d.pop_back();
                d.push_front(fr);
            }
        }
        
        for (int x : d) 
            cout << x << ' ';
        cout << '\n';
    }

    return 0;
}