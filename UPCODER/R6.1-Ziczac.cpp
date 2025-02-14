#include <bits/stdc++.h>
using namespace std;

int x, y, n;
int odd, even;

int main() {
    cin >> x >> y >> n;

    odd = (n + 1) >> 1;
    even = n >> 1;

    x += odd - even;
    y += odd; 

    cout << x << ' ' << y;
    return 0;
}