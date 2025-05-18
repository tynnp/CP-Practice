#include <bits/stdc++.h>
using namespace std;

bool comp(int a, int b) {
    return abs(a) > abs(b);
}

main() {
    int x;
    vector<int> v;
    
    while (cin >> x)
        v.push_back(x);
    
    sort(v.begin(), v.end(), comp);
    
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << ' ';
    
    return 0;
}