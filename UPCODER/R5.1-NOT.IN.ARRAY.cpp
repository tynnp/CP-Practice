#include <iostream>
using namespace std;

int n, a[300001];

int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        a[x]++;
    }

    for (int i = 0; i < 300001; i++) {
        if (!a[i]) {
            cout << i;
            break;
        }
    }

    return 0;
}