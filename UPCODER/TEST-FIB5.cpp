#include <iostream>
using namespace std;

int64_t n, a[101];

int main() {
    cin >> n;
    a[1] = a[2] = 1;

    for (int i = 3; i <= n; i++)    
        a[i] = a[i-1] + a[i-2];

    cout << a[n];
    return 0;
}