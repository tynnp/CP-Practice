#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    stringstream ss(s);
    vector<string> v;

    while (ss >> s)
        v.push_back(s);

    for (int i = 0; i < v.size(); i++) {
        if (i != 0) cout << ' ';
        cout << v[i];
    }

    cout << endl;
    return 0;
}