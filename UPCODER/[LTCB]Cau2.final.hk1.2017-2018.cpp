#include <iostream>
using namespace std;
 
int main() {
    int n, m = 0; 
    string s; 
    cin >> n >> s;

    int ans = 0, k = 0; 
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') k++;
        if (s[i] == '0') m++;
        if (s[i] != s[i+1]) {
            if (ans < k) ans = k; 
            k = 0;
        }
    }

    cout << m << " " << n - m << endl << ans;
    return 0;
}