#include <iostream>
#include <set>
using namespace std;

int n, x;
set<int> s;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    
    while (n--) {
        cin >> x;
        s.insert(x);
    }
    
    cout << s.size();
    return 0;
}
