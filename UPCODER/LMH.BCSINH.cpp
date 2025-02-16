#include <bits/stdc++.h>
using namespace std;

int n, bit[100];

void print() {
    for (int i = 0; i < n; i++)
        cout << bit[i];
    cout << endl;
} 

void Try(int idx) {
    if (idx == n) {
        print();
        return;
    }
    
    bit[idx] = 0;
    Try(idx + 1);
    
    bit[idx] = 1;
    Try(idx + 1);
}

int main() {
    cin >> n;
    Try(0);
    return 0;
}