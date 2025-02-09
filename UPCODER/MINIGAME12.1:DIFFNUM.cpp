#include <bits/stdc++.h>
using namespace std;

int n, chan, le;
int ansChan, ansLe;

int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        if (x & 1) {
            le++;
            ansLe = i;

        } else {
            chan++;
            ansChan = i;
        }
    }
    
    if (chan == 1)
        cout << ansChan;
    else
        cout << ansLe;

    return 0;
}