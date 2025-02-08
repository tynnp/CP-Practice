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
    bool found;

    cin >> n;
    for (int i = 2; i <= n; i++) {
        if (prime(i)) {
            cout << i << ' ';
            found = true;
        }
    }

    if (!found) 
        cout << -1;

    return 0;
}