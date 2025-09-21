#include <iostream>
using namespace std;

int n, a[100];

void print() {
    for (int i = 0; i < n; i++)
        cout << a[i];
    cout << '\n';
}

void solve(int pos) {
    if (pos == n) {
        print();
        return;
    }
    
    a[pos] = 0;
    solve(pos + 1);
    a[pos] = 1;
    solve(pos + 1);
}

int main() {
    cin >> n;
    solve(0);
    return 0;
}