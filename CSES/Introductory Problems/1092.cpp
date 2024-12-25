#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    long long m = n * (n + 1LL) >> 1;
    if (m & 1) {
        cout << "NO";
        return 0;
    }

    m >>= 1;
    long long sumA = 0, sumB = 0;
    vector<int> a, b;

    for (int i = n; i >= 1; i--) {
        if (sumA + i <= m) {
            sumA += i;
            a.push_back(i);
        } else {
            sumB += i;
            b.push_back(i);
        }
    }

    cout << "YES\n";

    cout << a.size() << '\n';
    for (int x : a)
        cout << x << ' ';
    cout << '\n';

    cout << b.size() << '\n';
    for (int x : b)
        cout <<x << ' ';
    
    return 0;
}