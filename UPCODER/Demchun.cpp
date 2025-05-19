#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int x = 0, y = 0;
    getline(cin, s);
    
    for (char c : s) {
        if (islower(c)) x++;
        if (isupper(c)) y++;
    }
    
    cout << "Chữ hoa: " << y << endl;
    cout << "Chữ thường: " << x;
    
    return 0;
}