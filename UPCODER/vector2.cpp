#include <bits/stdc++.h>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    int x, a, b;
    vector<int> v, range;

    stringstream ss(line);
    while (ss >> x)
        range.push_back(x);

    while (cin >> x)
        v.push_back(x);

    if (range.size() > 1) {
        a = range[0];
        b = range[1];
        v.erase(v.begin() + a, v.begin() + b);

    } else {
        a = range[0];
        if (a == -1)
            v.clear();
        else
            v.erase(v.begin() + a);
    }

    if (v.empty()) 
        cout << "empty";
    else 
        for (int x : v)
            cout << x << ' ';

    return 0;
}