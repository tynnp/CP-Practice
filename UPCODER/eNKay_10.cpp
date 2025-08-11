#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int cnt = 0;
    int test; 
    string s;
    cin >> test;
    cin.ignore();

    while (test--) {
        getline(cin, s);
        for (int i = 1; i < s.size(); i++)
            if (s[i-1] == ' ' && s[i] != ' ') cnt++;
        if (s[s.size()-1] == ' ') cnt++;
    }
    
    cout << cnt;
    return 0;
}