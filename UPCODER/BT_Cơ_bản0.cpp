#include <iostream>
using namespace std;

bool prime(int n) {
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0)
            return false;
    return n > 1;
}

int main() {
    int n;
    cin >> n;
    cout << prime(n);
    return 0;
}