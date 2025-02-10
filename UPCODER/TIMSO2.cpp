#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int i = 10011; i <= 99993; i++) {
        string s = to_string(i);
        int a = s[0] - '0';
        int b = s[1] - '0';
        int c = s[2] - '0';
        int d = s[3] - '0';
        int e = s[4] - '0';
        if (a + b + c == d * e)
            cout << i << ' ';
    }

    return 0;
}