#include <bits/stdc++.h>
using namespace std;

string s;
int cnt[30];

bool check() {
    for (char c : s) 
        cnt[c - 'a']++;

    for (char c = 'a'; c <= 'z'; c++)
        if (cnt[c - 'a'] & 1)
            return false;
    
    return true;
}

int main() {
    cin >> s;
    cout << (check() ? "Yes" : "No");
    return 0;
}