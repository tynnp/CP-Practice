#include <iostream>
using namespace std;

int main() {
    int64_t n, cnt = 0, sum = 0;
    cin >> n;

    for (int i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            cnt++;
            sum += i;
            if (i != n/i) {
                cnt++;
                sum += n/i;
            }
        }
    }

    cout << cnt << ' ' << sum;
    return 0;
}