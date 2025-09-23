#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    
    for (int i = 0; i < s.size(); i++) 
        if (!isdigit(s[i])) s[i] = ' ';
        
    int n, a[1000];
    stringstream ss(s);
    while (ss >> a[n]) n++;
    
    int Max = -9999;
    for (int i = 0; i < n; i++)
        Max = max(Max, a[i]);
    
    int ans = -9999;
    for (int i = 0; i < n; i++)
        if (a[i] > ans && a[i] < Max)
            ans = a[i];
            
    cout << (ans == -9999 ? -1 : ans);
    return 0;
}