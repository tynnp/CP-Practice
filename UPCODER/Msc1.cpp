#include <iostream>
using namespace std;

int main() {
    int n, res = 0;
    cin >> n;

    string a[n];
    for (string &x : a) cin >> x;

    for (string x : a) {
        if ((x[0] - '0') % 2 == 0)
            res += stoi(x);
    }

    cout << res;
    return 0;
}