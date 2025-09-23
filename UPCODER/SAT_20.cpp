#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    
    for (int i = 0; i < s.size(); i++) 
        if (!isdigit(s[i])) s[i] = ' ';
    
    int Min = 9999999, Max = -999999, x;
    stringstream ss(s);
    while (ss >> x) {
        Min = min(Min, x);
        Max = max(Max, x);
    }
    
    cout << Min + Max;
    return 0;
}