#include <bits/stdc++.h>
using namespace std;

bool check(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    string s;
    getline(cin, s);
    cout << count_if(s.begin(), s.end(), check);
    return 0;
}