#include <iostream>
using namespace std;

const int MAXN = 5 * 1e6 + 4;
int t, a, b;
int prime[MAXN], sum[MAXN];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 2; i < MAXN; i++) {
        if (!prime[i]) {
            for (int j = i; j < MAXN; j += i) {
                int k = j;

                while (k % i == 0) {
                    prime[j] += 1;
                    k /= i;
                }
            }
        }
    }

    for (int i = 2; i < MAXN; i++)
        sum[i] = sum[i - 1] + prime[i];

    cin >> t;
    while (t--) {
        cin >> a >> b;
        cout << sum[a] - sum[b] << '\n';
    }

    return 0;
}