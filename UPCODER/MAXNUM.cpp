#include <bits/stdc++.h>
using namespace std;

string n;
int pos[10];

int main() {
    cin >> n;
    
    for (int i = 0; i < n.size(); i++) 
        pos[n[i] - '0'] = i;

    bool swaped;
    for (int i = 0; i < n.size(); i++) {
        int cur = n[i] - '0';

        for (int j = 9; j > cur; j--) {
            if (pos[j] > i) {
                swap(n[i], n[pos[j]]);
                swaped = true;
                break;
            }
        }

        if (swaped) break;
    }

    cout << n;
    return 0;
}