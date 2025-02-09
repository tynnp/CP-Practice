#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string t = s + "0000";
    int len = max(s.size(), t.size());
    string bin1 = string(len - s.size(), '0') + s;
    string bin2 = t;

    int c = 0;
    string ans;

    for (int i = len - 1; i >= 0; i--) {
        int bit1 = bin1[i] - '0';
        int bit2 = bin2[i] - '0';
        int sum = bit1 + bit2 + c;
        ans = char(sum % 2 + '0') + ans;
        c = sum / 2;
    }

    if (c)
        ans = '1' + ans;
    
    cout << ans;
    return 0;
}