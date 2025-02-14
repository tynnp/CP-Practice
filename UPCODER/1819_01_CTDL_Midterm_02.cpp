#include <bits/stdc++.h>
using namespace std;

int x;
bool check[1000];

int main() {
    while (cin >> x) {
        if (!check[x])
            cout << x << ' ';
        check[x] = true;
    }

    return 0;
}