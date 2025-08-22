#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<bool> v(1000000001, 0);
    int x, t;
    cin >> t;
    
    while (t--) {
        cin >> x;
        if (v[x] == 0) cout << x << " ";
        v[x] = true;
    }
    
    return 0;
}