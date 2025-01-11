#include <iostream>
using namespace std;

int ans;
string s;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    freopen("circlecross.in", "r", stdin);
    freopen("circlecross.out", "w", stdout);
    cin >> s;
    
    for (int i = 0; i < s.size(); i++) 
        for (int j = i + 1; j < s.size(); j++) 
            for (int x = j + 1; x < s.size(); x++) 
                for (int y = x + 1; y < s.size(); y++)  
                    ans += s[i] == s[x] && s[j] == s[y];
  
    cout << ans;
    return 0;
}