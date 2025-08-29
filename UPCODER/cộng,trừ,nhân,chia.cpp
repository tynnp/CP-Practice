#include <bits/stdc++.h>
using namespace std;

char s;
int a, b;

int main() {
    cin >> s >> a >> b;
    
    if (s == '*') {
        cout << a * b;
    }
    
    if (s == '+') {
        cout << a + b;
    }
    
    if (s == '-') {
        cout << a - b;
    }
    
    if (s == '/') {
        cout << a / b;
    }
    
    return 0;
}