#include <iostream>
#include <cmath>
using namespace std;

int doi2sang10(string s) {
    int res = 0;
    int n = s.size();
    for (int i = n-1; i >= 0; i--)
        if (s[i] == '1') res += pow(2, n-1-i);
    return res;
}

int main() {
    string s;
    cin >> s;
    cout << doi2sang10(s);
    return 0;
}