#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int d = n % 10;
    int c = (n / 10) % 10;
    int b = (n / 100) % 10;
    int a = n / 1000;
    
    int ad = a * 10 + d;
    int bc = b * 10 + c;
    
    cout << ad << '+' << bc << '=' << ad + bc;
    return 0;
}