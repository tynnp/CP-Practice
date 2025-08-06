#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    double ans = 0;
    for (int i = 0; i < n; i++)
        ans += a[i];
    
    ans = ans / n;
    cout << fixed << setprecision(2) << ans;
    return 0;
}