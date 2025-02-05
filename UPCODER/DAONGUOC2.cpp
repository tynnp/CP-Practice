#include <iostream>
#include <vector>
using namespace std;

int reverse(int n) {
    int res = 0;

    while (n > 0) {
        res = res * 10 + n % 10;
        n /= 10;
    }

    return res;
}

int main() {
    freopen("inDaoNguoc2.txt", "r", stdin);
    freopen("outDaoNguoc2.txt", "w", stdout);

    int x;
    vector<int> v, rv, iv;

    while (cin >> x)
        v.push_back(x);

    for (int x : v)
        rv.push_back(reverse(x));

    int idx = 0;
    for (int i = 0; i < v.size(); i++) 
        if (rv[idx] < rv[i])
            idx = i;

    cout << v[idx] << endl;

    for (int i = 0; i < v.size(); i++)
        if (v[i] == v[idx])
            iv.push_back(i);
    
    if (iv.size() > 1)
        for (int x : iv)
            cout << x << ' ';

    return 0;
}