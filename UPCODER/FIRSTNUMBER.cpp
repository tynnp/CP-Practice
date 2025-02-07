#include <bits/stdc++.h>
using namespace std;

int main() {
    string n, s;
    cin >> n;

    for (int i = 1; i <= 1000; i++)
        s += to_string(i);

    cout << s.find(n) + 1;
    return 0;
}