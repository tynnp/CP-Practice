#include <bits/stdc++.h>
using namespace std;

const int MAXLEN = 1011;
string a, b, dp[MAXLEN][MAXLEN];

string best(string s1, string s2) {
    if (s1.size() != s2.size())
        return s1.size() > s2.size() ? s1 : s2;
    return s1 > s2 ? s1 : s2; 
}

string Try(int i, int j) {
    if (i >= a.size() || j >= b.size())
        return "";

    string &res = dp[i][j];
    if (res != "#") return res;

    string x = "";
    if (a[i] == b[j])
        x = string(1, a[i]) + Try(i + 1, j + 1);

    string op1 = Try(i + 1, j);
    string op2 = Try(i, j + 1);

    x = best(x, op1);
    x = best(x, op2);

    res = x;
    return res;
}

int main() {
    cin >> a >> b;
    int n = a.size(), m = b.size();

    for (int i = 0; i < MAXLEN; i++)
        for (int j = 0; j < MAXLEN; j++)
            dp[i][j] = "#";
    
    string ans = Try(0, 0);
    
    while (ans.size() > 0 && ans[0] == '0') 
        ans.erase(0, 1);
    
    cout << ans;
    return 0;
}
