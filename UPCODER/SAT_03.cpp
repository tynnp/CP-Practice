#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int ans = 0;
    for (int i = 1; i <= s.size(); i++)
        ans += i & 1 ? (s[i - 1] - '0') : 0;
    
    cout << ans;
    return 0;
}