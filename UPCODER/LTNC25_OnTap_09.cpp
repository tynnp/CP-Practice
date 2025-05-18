#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

bool check(int n) {
    return sqrt(n) == (int) sqrt(n);
} 

int main() {
    freopen("input.txt", "r", stdin);

    int n = 0;
    int a[100];
    while (cin >> a[n]) n++;

    for (int i = 0; i < n; i++)
        if (check(a[i]))
            cout << a[i] << ' ';
    
    return 0;
}