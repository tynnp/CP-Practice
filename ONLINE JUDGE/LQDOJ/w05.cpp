#include <iostream>
using namespace std;

int main() {
    int64_t n, cnt = 0, sum = 0;
    cin >> n;

    while (n) {
        cnt++;
        sum += n % 10;
        n /= 10;
    }

    cout << cnt << '\n' << sum;
    return 0;
}