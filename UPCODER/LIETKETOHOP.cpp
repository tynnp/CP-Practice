#include <bits/stdc++.h>
using namespace std;

int n, k, cnt;
int a[100];

void print() {
    cnt += 1;
    for (int i = 1; i <= k; i++)
        cout << a[i] << " ";
    cout << endl;
}

void Try(int x) {
    for (int i = a[x - 1] + 1; i <= n - k + x; i++) {    
        a[x] = i;
        if (x == k) print();
        else Try(x + 1);
    }
}

int main() {
    cin >> n >> k;
    Try(1);
    cout << cnt;
    return 0;
}