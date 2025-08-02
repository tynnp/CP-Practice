#include <iostream>
using namespace std;

int main() {
    int n, m;
    int a[105][105];
    cin >> n >> m;

    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < m; ++j) 
            cin >> a[i][j];

    int mrs = 0;
    for (int i = 0; i < n; ++i) {
        int rs = 0;
        for (int j = 0; j < m; ++j) 
            rs += a[i][j];
        mrs = max(mrs, rs);
    }

    int mcs = 0;
    for (int j = 0; j < m; ++j) {
        int cs = 0;
        for (int i = 0; i < n; ++i) 
            cs += a[i][j];
        mcs = max(mcs, cs);
    }

    cout << mrs << endl << mcs;
    return 0;
}