#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    getline(cin, a);
    getline(cin, b);
    
    int pos = a.find(b);
    vector<int> v;

    while(pos != string::npos) {
        v.push_back(pos);
        pos = a.find(b, pos + 1); 
    }

    if (v.empty()) 
        cout << "No";
    else 
        for(int x : v) cout << x <<" ";

    return 0;
}