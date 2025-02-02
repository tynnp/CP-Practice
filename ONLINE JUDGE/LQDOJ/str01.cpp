#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    getline(cin, s);
    getline(cin, t);

    int n = s.size();
    int m = t.size();

    cout << abs(n - m);
    return 0;
}