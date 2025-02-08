#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++)
            cout << '*';
        if (i != n) cout << endl;
    }

    return 0;
}