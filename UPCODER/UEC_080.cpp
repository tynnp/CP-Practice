#include <iostream>
using namespace std;

int tongcs(int n) {
    int res = 0;

    while (n != 0) {
        res += n % 10;
        n /= 10;
    }

    return res;
}

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int idx = -1;
    for (int i = 0; i < n; i++) 
        if (tongcs(a[i]) % 3 == 0) 
            idx = i;

    cout << idx;
    return 0;
}