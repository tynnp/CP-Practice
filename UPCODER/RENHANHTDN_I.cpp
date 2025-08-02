#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c; 
    char d;
    bool kTra;
    
    cin >> a >> d >> b >> c;
    
    switch (d) {
        case '+': kTra = (a + b == c); break;
        case '-': kTra = (a - b == c); break;
        case '*': kTra = (a * b == c); break;
        case '/': kTra = (a / b == c); break;
    }
    
    cout << (kTra ? "True" : "False");
    return 0;
}