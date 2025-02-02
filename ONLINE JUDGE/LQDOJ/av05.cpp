#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    int idxB = -1, idxE = -1;

    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            idxB = i + 1;
            break;
        }
    }

    for (int i = 0; i < n; i++)
        if (a[i] > 0)
            idxE = i + 1;

    cout << idxB << ' ' << idxE;
    return 0;
}