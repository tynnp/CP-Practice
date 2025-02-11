#include <bits/stdc++.h>
using namespace std;

int n, num, ans;
string s[101];

void check() {
    for (int i = 0; i < n; i++) {
        int x = stoi(s[i], nullptr, 2);
        ans += (num == x);
    }
}

int main() {
    string line;
    getline(cin, line);

    stringstream ss(line);
    while (ss >> s[n]) n++;
    cin >> num;

    check();
    cout << ans;
    return 0;
}