#include <iostream>
using namespace std;

int n, a[10005];

int main() {
    int idxF = -1, ifxL = -1;
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++) {
        if (a[i] < 0) {
            idxF = i;
            break;
        }
    }

    for (int i = 1; i <= n; i++)
        if (a[i] < 0) 
            ifxL = i;

    cout << idxF << ' ' << ifxL;
    return 0;
}