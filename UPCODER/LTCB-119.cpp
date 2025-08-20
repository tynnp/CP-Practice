#include <iostream>
using namespace std;

bool check(int n) {
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) return false;
    return n > 1;
}

int main() {
    int n; 
    cin >> n;
    for (int i = 2; i < n; i++)
        if (check(i)) cout << i << " ";
    return 0;
}