#include <bits/stdc++.h>
using namespace std;
 
int main() {
    char c;
    string s;
    int n, cnt = 0; 
    cin >> n >> c >> s;
    for (char x : s) if (x == c) cnt++;
    cout << cnt * n;
    return 0;
}