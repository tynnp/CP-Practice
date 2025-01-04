#include <iostream>
using namespace std;
 
int t;
string s;
 
int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> t;
    
    while (t--) {
        cin >> s;
        
        if (s.size() <= 10) {
            cout << s << '\n';
            continue;
        }
        
        cout << s[0] << s.size() - 2 << s[s.size()-1] << '\n';
    }
    
    return 0;
}
