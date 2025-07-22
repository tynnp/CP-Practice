#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int len = 2*n + 2;
    int a[len];
    a[1] = 1;

    for (int i = 2; i < len; i++) {
        if (i % 2 == 0) a[i] = a[i/2] + i/2;
        else a[i] = (i/2)*(i/2) + a[i/2]*a[i/2 + 1];   
    }

    cout << a[n];
}