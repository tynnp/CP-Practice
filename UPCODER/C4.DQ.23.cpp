#include <bits/stdc++.h>
using namespace std;

string bin(int n) {
    if (n == 0) return "0";
    return bin(n / 2) + to_string(n % 2);
}

int main() {
    int n;
    cin >> n;
    string s = bin(n);
    while(s[0] == '0' && s.size() > 1) s.erase(0, 1);
    cout << s;
    return 0;
}