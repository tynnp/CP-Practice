#include <iostream>
using namespace std;

struct ThongTin {
    int batDau;
    int traPhong; 
    int tienThue;
};

int const MAXN = 12001;
int n, pos[MAXN], dp[MAXN];
ThongTin a[MAXN];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> a[i].batDau >> a[i].traPhong >> a[i].tienThue;

    for (int i = 0; i < n; i++) 
        for (int j = i + 1; j < n; j++) 
            if (a[i].traPhong > a[j].traPhong)
                swap(a[i], a[j]);

    for (int i = 0; i < n; i++) {
        int l = 0, r = i - 1, res = 0;

        while (l <= r) {
            int mid = (l + r) / 2;

            if (a[mid].traPhong <= a[i].batDau) {
                res = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }

        pos[i] = res;
    }

    dp[0] = 0;
    for (int i = 1; i <= n; i++) 
        dp[i] = max(dp[i-1], a[i-1].tienThue + dp[pos[i-1]]);

    cout << dp[n];
    return 0;
}
