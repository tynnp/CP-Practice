#include <bits/stdc++.h>
using namespace std;

string s;
int a[300];

int main() {
    getline(cin, s);
    
    for (char c : s) a[tolower(c)]++;
    
    for (char c = '0'; c <= 'z'; c++)
        if (isalnum(c) && a[c])
            cout << c << ' ' << a[c] << endl;
            
    return 0;
}