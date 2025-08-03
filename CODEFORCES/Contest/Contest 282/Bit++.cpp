#include <iostream>
using namespace std;
 
int t, ans;
string s;
 
int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> t;
    
    while (t--) {
        cin >> s;
        
        if (s[0] == '+' || s[2] == '+')
            ans++;
        else 
            ans--;
    }
    
    cout << ans;
    return 0;
}
