#include <bits/stdc++.h>
using namespace std;

#define inp freopen("input.txt", "r", stdin)
#define out freopen("output.txt", "w", stdout)
const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

string s;
bool check;
vector<int> v;

bool prime(int n) {
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) return false;
    return n > 1;
}

int main() {
    inp; out;
    
    getline(cin, s);
    for (char &c : s) 
        if (!isdigit(c)) c = ' ';
    
    stringstream ss(s);
    while (ss >> s)
        if (prime(stoi(s)))
            v.push_back(stoi(s));
    
    sort(v.begin(), v.end());
    for (int i = 1; i < v.size(); i++)
        if (v[i] - v[i-1] == 2) {
            cout << v[i - 1] << " " << v[i] << " ";
            check = true;
        }
    
    if (!check) cout << "Khong co cap so nguyen to sinh doi trong chuoi.";
    return 0;
}