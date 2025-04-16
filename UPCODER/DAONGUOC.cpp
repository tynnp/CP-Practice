#include <bits/stdc++.h>
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
    int n;
    cin >> n;
    cout << reverse(n);
    return 0;
}

// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     string s;
//     cin >> s;
//     reverse(s.begin(), s.end());
//     cout << s;
//     return 0;
// }
