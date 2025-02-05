#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 0, a[100];
    while (cin >> a[n]) n++;
    cout << *max_element(a, a + n);
    return 0;
}