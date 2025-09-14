#include <bits/stdc++.h>
using namespace std;

int sum(int n) {
    if (n < 10) return n;
    return n % 10 + sum(n / 10);
}

bool check(string s) {
    if (s.size() < 2) 
        return false;
    
    int hoa = 0;    
    for (char c : s) {
        if (!isalpha(c))
            return false;
            
        if (isupper(c)) hoa++;
    }
    
    if (hoa != 1)
        return false;
    
    return true;
}

int soLonNhat(string s) {
    for (char &c : s) if (!isdigit(c)) c = ' ';
    // cout << s;
    stringstream ss(s);
    
    int x, res = 0;
    while (ss >> x) 
        if (sum(x) > sum(res)) 
            res = x;
    
    return res;
}

string ten(string s) {
    stringstream ss(s);
    string k, ans;
    
    while (ss >> k) {
        if (check(k)) {
            if (ans.empty())
                ans = k;
            else 
                ans = ans + ' ' + k;
        }
    }
    
    return ans;
}

int main() {
    int n;
    string s;
    cin >> n;
    cin.ignore();
    
    while (n--) {
        getline(cin, s);
        // cout << soLonNhat(s) << endl;
        cout << ten(s) << '\n' << soLonNhat(s);
        if (n != 0) cout << '\n';
    }
    
    return 0;
}