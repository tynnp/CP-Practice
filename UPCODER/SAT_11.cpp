#include <bits/stdc++.h>
using namespace std;

int n;
set<int> s;

int main() {
    while (cin >> n) s.insert(n);
    cout << s.size();
    return 0;
}