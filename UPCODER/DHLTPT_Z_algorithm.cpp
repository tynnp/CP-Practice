#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    getline(cin, a);
    getline(cin, b);
    
    size_t pos = a.find(b);
    while (pos != string::npos) {
        cout << pos + 1 << ' ';
        pos = a.find(b, pos + 1);
    }
    
    return 0;
}