#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e7 + 5;

string s;
bool cnt0;
int n, a[MAXN], sum;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> s;
    
    for (int i = 0; i < s.size(); i++) {
        a[n++] = s[i] - '0';
        cnt0 |= a[n - 1] == 0;
        sum += a[n - 1];
    }
    
    if (sum % 3 == 0 && cnt0) {
        sort(s.begin(), s.end(), greater<char>());
        cout << s;
    } else {
        cout << -1;
    }
    
    return 0;
}