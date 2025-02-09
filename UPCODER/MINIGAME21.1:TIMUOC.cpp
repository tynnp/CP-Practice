#include <iostream>
#include <set>
using namespace std;

int main() {
    int64_t n, cnt;
    set<int64_t> s;

    cin >> n;
    for (int64_t i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            s.insert(i);
            s.insert(n/i);
        }
    }

    auto it = s.begin();
    cout << s.size() << endl;

    for (it, cnt = 1; it != s.end(); it++, cnt++) {
        cout << *it << " ";
        if (cnt % 10 == 0) cout << endl;
    }   

    return 0;
}