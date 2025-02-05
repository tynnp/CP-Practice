#include <iostream>
using namespace std;

bool prime(int n) {
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0)
            return false;
    return n > 1;
}

int sum(int n) {
    int res = 0;

    while (n > 0) {
        if (prime(n % 10))
            res += n % 10;
        n /= 10;
    }

    return res;
}

int main() {
    int x;
    while (cin >> x) 
        cout << sum(x) << endl;
    return 0;
}