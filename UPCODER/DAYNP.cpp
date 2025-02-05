#include <iostream>
using namespace std;

int n, a[100];

void print() {
    for (int i = 0; i < n; i++)
        cout << a[i];
    cout << endl;
}

void solve(int idx) {
    if (idx == n) {
        print();
        return;
    }
    
    a[idx] = 0;
    solve(idx + 1);
    a[idx] = 1;
    solve(idx + 1);
}

int main() {
    cin >> n;
    solve(0);
    return 0;
}