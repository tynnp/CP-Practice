#include <bits/stdc++.h>
using namespace std;

main() {
    string s;
    cin >> s;
    
    replace(s.begin(), s.end(), '_', ' ');
    
    cout << s;
}