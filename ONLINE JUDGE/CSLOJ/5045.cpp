#include <iostream>
using namespace std;

#define fastIO ios_base::sync_with_stdio(0); cin.tie(0)
const int MAXN = 1e6 + 5;

int n, x;
int k, v;
int a[MAXN];

int main() {
    fastIO;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        a[x]++;
    }

    for (int i = 0; i < MAXN; i++) {
        if (a[i] > k) {
            k = a[i];
            v = i;
        }
    }

    cout << v;
    return 0;
}