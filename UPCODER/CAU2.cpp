#include <bits/stdc++.h>
using namespace std;

string s;
int a[3];

int parse(string s) {
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    
    size_t pos = s.find(';');
    size_t first = s.find(';', pos + 1);
    size_t second = s.find(';', first + 1);
    
    string res = s.substr(first + 1, second - first - 1);
    
    if (res == "SUPHAM")
        return 0;
        
    if (res == "SAIGON")
        return 1;
        
    if (res == "TUNHIEN")
        return 2;
}

int main() {
    freopen("upcoder.inp", "r", stdin);
    freopen("upcoder.out", "w", stdout);

    while (cin >> s) 
        a[parse(s)]++;
        
    if (a[1])
        cout << "SAIGON:" << a[1] << endl;
        
    if (a[0]) 
        cout << "SUPHAM:" << a[0] << endl;
    
    if (a[2])
        cout << "TUNHIEN:" << a[2];
    
    return 0;
}