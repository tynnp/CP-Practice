#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    vector<int> v;

    while (cin >> x)
        v.push_back(x);

    cout << *max_element(v.begin(), v.end()) << ' ';
    cout << *min_element(v.begin(), v.end());

    return 0;
}