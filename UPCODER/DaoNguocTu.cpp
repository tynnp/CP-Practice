#include <bits/stdc++.h>
using namespace std;

int main() {
    string x;
    vector<string> v;
    
    while (cin >> x)
        v.push_back(x);
    
    for (auto it = v.rbegin(); it != v.rend(); it++)
        cout << *it << ' ';
    
    return 0;
}