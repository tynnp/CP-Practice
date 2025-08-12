#include <iostream>
using namespace std;

bool calc(long long n) {
    int m[10] = {0};

    while (n != 0) {
        m[n % 10]++;
        n /= 10;
    }

    for (int i = 0; i < 10; i++)
        if (m[i] != 0 && m[i] != 2)
            return false;
        
    return true;
}

int main() {
    long long n;
    cin >> n;
    cout << (calc(n) ? "YES" : "NO");
    return 0;
}