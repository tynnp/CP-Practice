#include <bits/stdc++.h>
using namespace std;

string s;
char x, y;
int f[1000];

int main() {
    getline(cin, s);
    cin >> x >> y;
    
    for (int i = 0; i < s.size(); i++)
        f[s[i]]++;
        
    cout << x << " : " << f[x] << '\n';
    cout << y << " : " << f[y] << '\n';
    
    return 0;
}