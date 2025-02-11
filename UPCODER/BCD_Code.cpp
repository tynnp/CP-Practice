#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string a, b, c;
    
    cin >> a >> b >> c >> n;
    int x = stoi(a, nullptr, 2);
    int y = stoi(b, nullptr, 2);
    int z = stoi(c, nullptr, 2);

    if (n == x || n == y || n == z) 
        cout << "YES";
    else 
        cout << "NO";
    
    return 0;
}