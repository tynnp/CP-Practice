#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

main() {
    int n, q, t, x, y;
    cin >> n >> q;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    while (q--) {
        cin >> t >> x;

        if (t == 1) {
            cin >> y;
            if (x <= v.size()) 
                v.insert(v.begin() + x, y);
            else 
                v.push_back(y); 
        }

        if (t == 2) {
            v.erase(remove(v.begin(), v.end(), x), v.end());
        }

        if (t == 3) {
            if (x < v.size())
                cout << v[x] << endl;
            else 
                cout << "ERROR" << endl;
        }
    }

    return 0;
}