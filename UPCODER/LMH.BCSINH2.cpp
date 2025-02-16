#include <iostream>
using namespace std;

int n, k;
int bit[25]; 

void print() {
    for (int i = 1; i <= k; i++) 
        cout << bit[i] << ' ';
    cout << '\n';
}

void Try(int idx) {
    if(idx > k) {
        print();
        return;
    }

    int s = (idx == 1 ? 1 : bit[idx - 1] + 1);

    for (int j = s; j <= n - k + idx; j++) {
        bit[idx] = j;
        Try(idx + 1);
    }
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> k;
    Try(1);
    return 0;
}
