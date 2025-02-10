#include <bits/stdc++.h>
using namespace std;

string s;
int x, ans;

int main() {
    getline(cin, s);

    for (char &c : s) 
        if (isalpha(c))
            c = ' ';

    stringstream ss(s);
    while (ss >> x) 
        ans = max(ans, x);

    cout << ans;
    return 0;
}