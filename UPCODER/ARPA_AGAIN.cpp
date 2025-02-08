#include <bits/stdc++.h>
using namespace std;

int n;
string s;
int ans[] = {6, 8, 4, 2};

int main() {
    cin >> s;

    if (s == "0") {
        cout << 1 << endl;
        return 0;
    }

    int m = 0;
    for (char c : s)
        m = (m * 10 + (c - '0')) % 4;

    cout << ans[m];
    return 0;
}