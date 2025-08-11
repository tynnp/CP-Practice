#include <bits/stdc++.h>
using namespace std;

string s;
int ans = 0;

int main() {
    cin >> s;
    sort(s.begin(), s.end());
    do {
        ans += stoll(s);
    } while (next_permutation(s.begin(), s.end()));
    
    cout << ans;
    return 0;
}