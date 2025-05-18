#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

bool check(int n) {
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0)
            return false;
    return n > 1;
} 

int main() {
    freopen("output.txt", "w", stdout);

    int n = 0;
    int a[100];
    while (cin >> a[n]) n++;

    for (int i = 0; i < n; i++)
        if (check(a[i]))
            cout << a[i] << ' ';
    
    return 0;
}