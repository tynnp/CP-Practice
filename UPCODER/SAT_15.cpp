#include <bits/stdc++.h>
using namespace std;

string s;
int a[1001];

int main() {
    getline(cin, s);
    
    for (char c : s) a[c]++;
    
    for (int c : s) {
        if (a[tolower(c)] && a[toupper(c)]) {
            cout << "YES";
            return 0;
        }
    }
    
    cout << "NO";
    return 0;
}