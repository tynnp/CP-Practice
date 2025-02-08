#include <bits/stdc++.h>
using namespace std;

int a, b, ans;

bool snt(int n) {
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0)
            return false;
    return n > 1;
}

bool doiXung(int n) {
    string s = to_string(n);
    int i = 0, j = s.size() - 1;
    
    while (i < j) {
        if (s[i] != s[j])
            return false;
        i++, j--;
    }

    return true;
}

int main() {
    cin >> a >> b;

    for (int i = a; i <= b; i++)
        if (snt(i) && doiXung(i))
            ans++;
    
    cout << ans;
    return 0;
}