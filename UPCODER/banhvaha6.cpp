#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    int a, b, elo = 0, st = 0;

    for(int i = 0; i < n;i++) {
        cin >> a >> b;
        elo += a * b;
        st += a;
    }

    cin >> m;
    cout << elo + m << endl << st;
    return 0;
}